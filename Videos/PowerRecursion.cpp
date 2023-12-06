#include <iostream>
using namespace std;
//compute a^n
int Power(int a,int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive case
        return a*Power(a,n-1);
    
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<Power(a,n)<<endl;
    return 0;
}