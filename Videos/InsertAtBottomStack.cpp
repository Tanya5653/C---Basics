#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &s,int data){
    if(s.empty()){
        s.push(data);
        return;
    }
    int temp= s.top();
    s.pop();
    InsertAtBottom(s,data);
    s.push(temp);
}
void Reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int t= s.top();
    s.pop();
    Reverse(s);
    InsertAtBottom(s,t);

}
int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    //InsertAtBottom(s,5);
    Reverse(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}