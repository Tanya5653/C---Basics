#include<iostream>
using namespace std;
void SetIthBit(int &n,int i){
    int mask=(1<<i);
    n=(n|mask);
}
int main(){
    int n=5;
    int i;
    cin>>i;
    SetIthBit(n,i);
    cout<<n;
    return 0;
}