#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 float ans=0;
 float inc=1.0;
 while(ans*ans<=n){
    ans= ans+inc;
 }
 ans=ans-inc;
 cout<<ans;
 return 0;
}