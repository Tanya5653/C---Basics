//FORWARD DECLARATION
/*
class List;

class Node{
    int data;
   
public:
Node* next;
Node(int d):data(d),next(NULL){}

int GetData(){
    return data;
}

friend class List;

};

class List{
    Node* head;
    Node* tail;
public:

    List():head(NULL),tail(NULL){}

    Node* begin(){
        return head;
    }

    void push_front(int data){
        if(head==NULL){
            Node*n =new Node(data); 
            head = tail = n;
        }
        else{
            Node*n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data){
        if(head==NULL){
            Node*n = new Node(data);
            head = tail = n;
        }
        else{
            Node*n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
    void insert(int data,int pos){
        if(pos==0){
            push_front(data);
            return;
        }
        //otherwise
        Node* temp = head;
        for(int jump=1;jump<=pos-1;jump++){
            temp= temp->next;
        }
        Node* n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
};
*/

//again for practise
#include<iostream>
using namespace std;

class List;

class Node{
    int data;

    public:
    Node* next;
    Node(int d):data (d), next(NULL){}

    int GetData(){
        return data;
    }
    ~Node(){
        if( next != NULL){
            delete next;
        }
            cout<<"the node deleted with data:"<<data<<endl;
    }
    friend class List;
};
class List{
    Node* head;
    Node* tail;

    int SearchHelper(Node *start,int key){
        if(start==NULL){
            return -1;
        }
        if(start->data==key){
            return 0;
        }
        int SubIdx= SearchHelper(start->next,key);
        if(SubIdx==-1){
            return -1;
        }
        return SubIdx+1;
    }

    public:


    List():head(NULL),tail(NULL){}

    Node* begin(){
        return head;
    }

    void push_front(int data){
        if(head==NULL){
            Node* n = new Node(data);
            head = tail = n;
        }
        else{
            Node* n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data){
        if(head==NULL){
            Node* n= new Node(data);
            head = tail = n;
        }
        else{
            Node* n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
    void insert(int data,int pos){
        if(pos==0){
            push_front(data);
            return;
        }
        //otherwise
        else{
            Node* temp= head;
            for(int jump=1;jump<=pos-1;jump++){
                temp = temp->next;
            }
            Node* n = new Node(data);
            n->next = temp->next;
            temp->next = n;
        }
    }
    void pop_front(){
        Node * temp=head;
        head = head->next;
        temp->next= NULL;
        delete temp;
    }

    

    int search(int key){

		Node * temp = head;
		int idx = 0;

		while(temp!=NULL){
			if(temp->data == key){
				return idx;
			}
			idx++;
			temp = temp->next;
		}	
		return -1;
	}
    int RecSearch(int key){
        int idx = SearchHelper(head,key);
        return idx;
    }
    ~List(){
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }
};