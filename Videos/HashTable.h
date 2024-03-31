#include<iostream>
#include<string>
using namespace std;


template<typename T>
class Node{
    public:
    string key;
    T value;
    Node*next;

    Node(string key,T value){
        this->key=key;
        this->value=value;
        next = NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
    
};
template<typename T>
class HashTable{
    Node<T> ** table;
    int cs;
    int ts;

    int HashFunc(string key){
        int idx=0;
        int power = 1;
        for (auto ch:key){
            idx = (idx + ch*power)%ts;
            power =(power*29)%ts;
        }
        return idx;
    }
    void ReHash(){
        //save the ptr to old table and we will do insertions in new table
        Node<T>** OldTable= table;
        int Oldts = ts;

        //increase the table size
        cs=0;
        ts = 2*ts + 1;
        table = new Node<T>*[ts];
        for(int i=0;i<ts;i++){
            table[i]= NULL;
        }
        //copy elements from oldtable to new table
        for(int i=0;i<Oldts;i++){

            Node<T>* temp= OldTable[i];
            while(temp!=NULL){
                string key = temp->key;
                T value = temp->value;
                insert(key,value);
                temp=temp->next;
            }
            //destroy ith linked list
            if(OldTable[i]!=NULL){
                delete OldTable[i];
            }
        }
        //destroy old table
        delete [] OldTable;
    }

public:
    HashTable(int default_size =7){
    cs = 0;
    ts = default_size;
    table = new Node<T>*[ts];
    for(int i=0;i<ts;i++){
        table[i] = NULL;
    }
}

void insert(string key,T value){
    int idx= HashFunc(key);
    Node<T> * n = new Node<T>(key,value);
    n->next = table[idx];
    table[idx]=n;
    cs++;
    float load_factor=cs/float(ts);
    if(load_factor>0.7){
        ReHash();
    }
}

T* search(string key){
    int idx = HashFunc(key);
    Node<T> * temp = table[idx];

    while(temp!=NULL){
        if(temp->key==key){
            return &temp->value;
        }
        temp = temp->next;
    }
    return NULL;
}

void print(){
    for(int i=0;i<ts;i++){
        cout<<"Bucket"<<i<<"->";

        Node<T> *temp = table[i];
        while(temp!=NULL){
            cout<<temp->key<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
 }
 };

/*
template<typename T>
class Node{
    public:
    string key;
    T value;
    Node* next;

Node(string key,T value){
    this->key= key;
    this->value= value;
    next = NULL;
}
};
class HashTable{
    Node<T> ** table;
    int cs;
    int ts;

HashFunc(string key){
    int idx=0;
    int power=1;
    for(auto ch:key){
        idx = (idx+ch*power)%ts;
        power = (power*29)%ts;
    }
    return idx;
}
public:
  HashTable(int default_size=7){
    cs=0;
    ts= default_size;
    table = new Node<T>*[ts];
    for(i=0;i<ts;i++){
        table[i]=NULL;
    }
  }
void insert(string key, T value){
    int idx=HashFunc(key);
    Node<T> * n =new Node<T> (key,value);
    //insertion at the head of the linked 
    n->next=table[idx];
    table[idx]=n;
}
};
*/