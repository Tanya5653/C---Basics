#include<iostream>
using namespace std;
int main(){
   /*char a[]={'a','b','c'}; //garbage value
   cout<<a<<endl;
    
    char b[]={'a','b','c','\0'};
    cout<<b<<endl;
//input
char s[10];
cin>>s;
cout<<s;*/
char s[]="hello"; //strings do have null character at the end hence size is 6
cout<<sizeof(s)<<endl;
char s1[]={'h','e','l','l','o'};
cout<<sizeof(s1);
return 0;}