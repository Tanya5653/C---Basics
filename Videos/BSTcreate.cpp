#include<iostream>
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
int main(){
    Node* root= NULL;
    int arr[]={8,3,10,1,6,14,4,7,13};
    for(int x:arr){
        root= insert(root,x);
    }
    PrintInorder(root);
    cout<<endl;
    int key;
    cout<<"enter key:";
    cin>>key;
    root=remove(root,key);
    PrintInorder(root);
    //cout<<Search(root,key)<<endl;
    return 0;
}