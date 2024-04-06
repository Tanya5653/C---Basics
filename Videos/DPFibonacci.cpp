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
//bottom up dp approach
int  Fib(int n){
    int dp[n+1]={0};
    //assign
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    int [] dp = new int[]{};
    cout<<Fib(n,dp[]);
    return 0;
}