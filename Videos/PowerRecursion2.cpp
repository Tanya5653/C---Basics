#include<iostream>
using namespace std;
int FastPower(int a,int n){
 //basecase
 if(n==0){
    return 1;
 }
 //recursivecase
 int subprob = FastPower(a,n/2);
 int subprobsq = subprob*subprob;
 if(n&1){
   return a*subprobsq;
 }
 return subprobsq;
}
int main(){
int a,n;
cin>>a>>n;
cout<<FastPower(a,n);
return 0;
}