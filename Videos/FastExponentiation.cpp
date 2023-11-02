#include<iostream>
using namespace std;
int Fast_Exponent(int a,int n){
    int ans=1;
    while(n>0){
        int last_digit = n&1;
        if(last_digit){
        ans = ans*a;
        }
    a = a*a;
    n= n>>1;
    }
    return ans;
}
int main(){
    int a,n;
    cin>>a>>n;
    cout << Fast_Exponent(a,n);
    return 0;
}