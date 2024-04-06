#include<iostream>
using namespace std;
//topdown dp approach
int Fib(int n,int dp[]){
    if(n==0 or n==1){
        return n;
    }
    else if(dp[n]!=0){
        return dp[n];
    }
    return dp[n]= Fib(n-1,dp)+Fib(n-2,dp);
}
int main(){
    int n;
    cin>>n;
    int [] dp = new int[]{};
    cout<<Fib(n,dp[]);
    return 0;
}