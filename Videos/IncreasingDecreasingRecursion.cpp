#include<iostream>
using namespace std; 
void inc(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive case
    inc(n-1);
    cout<<n<<" ";
}
void dec(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive case
    cout<<n<<" ";
    dec(n-1);
}
int main(){
    int n;
    cin>>n;
    inc(n);
    cout<<"\n";
    dec(n);

}