#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};
void print(Node* tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail= tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}
void insertNode(Node* &tail,int element,int d){
    //assuming th element is  prsnt in the list
    //empty list
    if(tail==NULL){
        Node* newNode= new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    //non-empty list
    else{
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //elemnt found
        Node* temp= new Node(d);
        temp->next = curr->next;
        curr->next= temp;
    }
}
void deleteNode(Node* &tail,int val){
    //empty list
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    //non-emty
    else{
        Node*prev = tail;
        Node*curr = prev->next;
        while(curr->data!=val){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node* tail =NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,11);
    print(tail);
    insertNode(tail,11,13);
    print(tail);
    deleteNode(tail,11);
    print(tail);
    return 0;
}