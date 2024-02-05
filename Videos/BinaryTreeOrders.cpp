#include<iostream>
using namespace std;
//input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//preorder output: 1 2 4 5 7 3 6
//inorder:4 2 7 5 1 3 6
class Node{
    public:
    int data;
    Node * left;
    Node * right;
    
    Node(int d){
        data=d;
        left= right= NULL;
    }
};
Node* BuildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n = new Node(d);
    n->left=BuildTree();
    n->right= BuildTree();
    return n;
}
void PrintPreorder(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PrintPreorder(root->left);
    PrintPreorder(root->right);
}
void PrintInorder(Node * root){
    if(root==NULL){
        return;
    }
    PrintInorder(root->left);
    cout<<root->data<<" ";
    PrintInorder(root->right);
}
void PrintPostorder(Node * root){
    if(root== NULL){
        return;
    }
    PrintPostorder(root->left);
    PrintPostorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node * root = BuildTree();
    PrintPreorder(root);
    cout<<endl;
    PrintInorder(root);
    cout<<endl;
    PrintPostorder(root);
    return 0;
}