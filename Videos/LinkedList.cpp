#include<iostream>
#include"LinkedList.h"
using namespace std;
int main(){
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);
    l.push_front(10);
    l.insert(2,2);
    l.insert(9,1);
    l.insert(8,2);
    l.insert(7,3);

    Node* head = l.begin();
    while(head!=NULL){
        cout<<head->GetData()<<"->";
        head = head->next;
    }
    cout<<endl;
    int key;
    cout<<"ENTER KE3Y ELEMENT: ";
    cin>>key;
    cout<<"SEARCHING:"<<endl;
    cout<<"the key is present at index:"<<l.search(key)<<endl;
    cout<<"RECURSION SEARCHING:"<<endl;
    cout<<"the key is present at index: "<<l.RecSearch(key)<<endl;
   return 0;
}