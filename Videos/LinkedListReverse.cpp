//GALAT HAIIIIII BAAABBBBBUUUUUUUUUUUUUUUU
#include<iostream>
using namespace std;
class Node()
class Node{
    Node* head;
    Node* tail;
}
    void reverse(Node*head){
    Node* Current = head;
    Node* Prev= NULL;
    Node* Next;

    while(Current!=NULL){
        Next = Current->Next;
        Current->Next = NULL;
        Prev = Current;
        Current = Next;
    }
    head = Prev;
    }