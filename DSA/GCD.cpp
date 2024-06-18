#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"enter number a:";
    cin>>a;
    cout<<"Enter number b:";
    cin>>b;
    cout<<gcd(a,b);
    return 0;
}
//for LCM
//gcd(a,b)*lcm(a,b)= a*b