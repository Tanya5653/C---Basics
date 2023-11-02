#include<iostream>
using namespace std;
int CountingBits(int n){
    int count=0;
    while(n>0){
        int last_bit = n & 1;
        count = count + last_bit;
        n= n>>1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<CountingBits(n);
    return 0;
}