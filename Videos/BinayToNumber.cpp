#include <iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int ans= 0;
 int p=1;
 while(n>0){
  int lastdigit=n%10;
  int a= lastdigit*p;
  ans = ans+a;
  n=n/10;
  p=p*2;
 }
  cout<<ans;
return 0;
}