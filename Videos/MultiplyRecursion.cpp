#include<iostream>
using namespace std;
int Multiply(int a,int b,int product){
    while(b>0){
      product=product+a;
      b--;
    }
    return product;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<Multiply(a,b,0);
    return 0;
}