#include <iostream>
using namespace std;
//compute a^n
int Power(int a,int n){
    if(n==0){
        return 1;
    }
        return a*Power(a,n-1);
    
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<Power(a,n)<<endl;
    return 0;
}