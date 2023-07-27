#include<iostream>
using namespace std;
int findingzero(int n){
    int ans=0;
    for(int D=5;n/D>=1;D=D*5){
        ans= ans + n/D;
    }
    cout<< ans;
}
int main(){
     int n;
    cin >>n;
    findingzero(n);
    return 0;
}