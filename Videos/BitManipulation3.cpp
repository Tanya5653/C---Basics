#include<iostream>
using namespace std;
void ClearIthBit(int &n,int i){
    int mask= ~(1<<i);
    n= (n & mask);
}
int main(){
    int n=13;
    int i;
    cin>>i;
    ClearIthBit(n,i);
    cout<<n;
}