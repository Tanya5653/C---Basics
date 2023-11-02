#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n & (n-1)) ==0 ){
        cout<<"POWER OF TWO"<<endl;
    }
    else{
        cout<<"NOT POWER OF TWO"<<endl;
    }
    return 0;
}