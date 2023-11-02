#include<iostream>
using namespace std;
void ClearLastIthBits(int &n,int i){
    int mask=(~0<<i);  //int mask=(-1<<i) i.e, -1 and ~0 are same.
    n= n & mask;
}
int main(){
    int n=15;
    int i;
    cin>>i;
    ClearLastIthBits(n,i);
    cout<<n;
    return 0;
}