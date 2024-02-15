#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int key;
    Node * left;
    Node* right;
    
    Node(int key){
        this->key = key;
        left = right =NULL;
    }
};

Node* insert(Node*root, int key){
    if(root==NULL){
        return new Node(key);
    }
    if(key < root->key){
        root->left = insert(root->left,key);
    }
    else{
        root->right = insert(root->right,key);
    }
    return root;
}

void PrintInorder(Node* root){
    if(root==NULL){
        return;
    }
    PrintInorder(root->left);
    cout<<root->key<<" ";
    PrintInorder(root->right);
}

bool Search(Node *root,int key){
    if(root==NULL){
        return false;
    }
    if(root->key == key){
        return true;
    }
    if(key<root->key){
        return Search(root->left,key);
    }
    else{
        return Search(root->right,key);
    }
}
Node * findMin(Node*root){
    while(root->left!=NULL){
        return root ->left;
    }
    return root;
}

Node* remove(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    else if (key < root->key){
        root->left= remove(root->left,key);
    }
    else if(key> root->key){
        root->right = remove(root->right,key);
    }
    else{
        //0 child
        if(root->left== NULL and root->right == NULL){
            delete root;
            root= NULL;
        }
        //single child
        else if(root->left==NULL){
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right== NULL){
            Node* temp = root;
            root= root->left;
            delete temp;
        }
        //2child
        else{
            Node * temp= findMin(root->right);
            root->key = temp->key;
            root->right = remove(root->right,temp->key);
        }

    }
     return root;
}
void printRange(Node* root,int k1,int k2){
    if(root==NULL){
        return ;
    }
    if(root->key >= k1 and root->key <=k2){
        printRange(root->left,k1,k2);
        cout<<root->key<<" ";
        printRange(root->right,k1,k2);
    }
    else if(root->key > k2){
        printRange(root->left,k1,k2);
    }
    else{
        printRange(root->right,k1,k2);
    }
}

void PathRoot2leaf(Node* root,vector<int> path){
    if(root==NULL){
        return;
    }
    if(root->left==NULL and root->right==NULL){
        for(int node:path){
            cout<<node<<"->";
        }
        cout<<root->key<<" ";
        cout<<endl;
        return;
    }
    //reccase
    path.push_back(root->key);
    PathRoot2leaf(root->left,path);
    PathRoot2leaf(root->right,path);
    //backtrack
    path.pop_back();
    return;
}
int main(){
    Node* root= NULL;
    int arr[]={8,3,10,1,6,14,4,7,13};
    for(int x:arr){
        root= insert(root,x);
    }
    PrintInorder(root);
    cout<<endl<<"range contains:";
   // int key;
   // cout<<"enter key:";
   // cin>>key;
   //root=remove(root,key);
   //PrintInorder(root);
   //cout<<Search(root,key)<<endl;
   int k1,k2;
   cout<<"enter the rangek1 and k2:";
   cin>>k1>>k2;
   printRange(root,k1,k2);
   cout<<endl;
   vector <int> path;
   cout<<"root to leaf paths are:"<<endl;
   PathRoot2leaf(root,path);
    return 0;
}