#include<iostream>
using  namespace std;
void AlphabetPattern(int n){
    for(int i=1;i<=n;i++){
        int cnt = n-i +1;
        char alphabet='A';

    for(int j=1;j<=cnt;j++){
        cout<<alphabet;
        alphabet=alphabet + 1;
    }cout<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    AlphabetPattern(n);
}
