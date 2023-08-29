#include<iostream>
using namespace std;
int main(){

  //compile or static time allocation
  //allocation + deallocation
   
   int a[100];
   cout<<sizeof(a)<<endl;

   //dynamic or run time allocation
   int n;
   cin>>n;
   int *b = new int[n];
   cout<<sizeof(b)<<endl;

   for(int i=0;i<n;i++){
    cin>>a[i];
    cout<<a[i]<<" ";
   }

    return 0;
}