#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++){
    int value= i%2==0?1:0;
for(int cnt=1;cnt<=i;cnt++){
    cout<<value;
    value= 1-value;
}cout<<endl;
}
 return 0;
} 