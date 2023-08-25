#include<iostream>
using namespace std;
int main(){
 int z=20;
 int x=10;
 cout<< &x <<endl;
 float y=20.20;
 cout<< &y <<endl;
 //not applicable for character variables
 char ch= 'A';
 cout<<(void*)&ch <<endl;
cout<<"POINTERS"<<endl;
//pointers
 int *xptr;
 xptr=&x;
 cout<<&x<<endl;
 cout<<xptr<<endl;
 //re assign another address to same variable
 xptr=&z;
 cout<<xptr<<endl;
 cout<<&z<<endl;
    return 0;
}