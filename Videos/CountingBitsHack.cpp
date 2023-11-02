#include<iostream>
using namespace std;
int CountingBitHack(int n){
    int ans=0;
    while(n>0){ //iterates only the no. of time set bits are prsnt i.e, 1 is prsnt.
        n = n & (n-1);
        ans ++;
    }
    return ans;
}
int main(){
    int n; 
    cin>>n;
    cout<<CountingBitHack(n)<<endl;
    return 0;
}