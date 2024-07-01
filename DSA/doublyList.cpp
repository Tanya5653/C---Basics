#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    //destructor
    ~Node(){
        int val= this->data;
        if(next!=NULL){
            delete next;
            next= NULL;
        }
    }
};
//printing the list
void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//traverse to obtain length
int getLength(Node* &head){
    Node*temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
//to insert at head
void insertAtHead(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
//insert at tail
void insertAtTail(Node* &tail,int d){
    Node * temp= new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail= temp; 
}
//inserting at middle,start,tail or anywhere in the list
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //insert at start
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    ///insert at tail
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    //insert anywhere
    Node * nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->prev=nodeToInsert;
    nodeToInsert->prev=temp;
    temp->next=nodeToInsert;
}
//delete from anywhere
void deleteNode(Node * &head,int position){
    if(position==1){
        Node* temp= head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    Node* node1= new Node(10);
    Node* head = node1;
    Node* tail = node1; 
    print(head);
//  cout<<getLength(head)<<endl;
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,30);
    print(head);
    insertAtHead(head,45);
    print(head);
    insertAtTail(tail,50);
    print(head);
    insertAtTail(tail,80);
    print(head);
    insertAtPosition(head,tail,5,20);
    print(head);
    insertAtPosition(head,tail,7,70);
    print(head);
    deleteNode(head,5);
    print(head);
    deleteNode(head,7);
    print(head);
    return 0;
}

