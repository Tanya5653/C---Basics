#include<iostream>
using namespace std;
int GetIthBit(int n,int i){
    int mask=(1<<i);
    return (n & mask) > 0 ? 1 : 0;
}
int main(){
    int n=5;
     int i;
     cin>>i;
     cout<<GetIthBit(n,i);
    return 0;
}