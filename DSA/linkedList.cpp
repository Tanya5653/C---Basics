#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
//constructor
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
};
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp =new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node* &head){
    Node* temp = head; 
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtPosition(Node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp= head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next  = temp->next;
    temp->next = nodeToInsert;
}
void deleteAtPosition(Node* &head,int position){
   //deleteat 1st pos
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting from middle or last from ll
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next= NULL;
        delete curr;
    }
}
int main(){
//    Node* node1 = new Node(10);
//    Node* head = node1;
//         // cout<<node1->data <<endl;
//         // cout<<node1->next <<endl;
//    print(head);
//    insertAtHead(head,20);
//    print(head);
//    insertAtHead(head,50);
//    print(head);
    // Node* node1 = new Node(10);
    // Node* tail= node1;
    // Node* head = node1;
    // print(head);
    // insertAtTail(tail,20);
    // print(head);
    // insertAtTail(tail,30);
    // print(head);
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* temp = head;
    insertAtHead(head,4);
    insertAtHead(head,30);
    insertAtHead(head,50);
    insertAtHead(head,35);
    print(head);
    insertAtPosition(head,3,40);
    print(head);
    deleteAtPosition(head,2);
    print(head);
    return 0;
}