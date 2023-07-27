#include<iostream>
using namespace std;
int f=0;
int c;
int main(){
    while(f<=300){
        c= (5*(f-32))/9;
        cout<<f<<" "<<c<<endl;
        f=f+20;
    }
     
    return 0;
}