#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"enter the key you want to search for:";
    cin>>key;
    int i;
    for(i=0;i<n;i++){
    if(a[i]==key){
        cout<<i<<" key is the linear search"<<endl;
        break;
    }
    }
    if(i==n){
        cout<<"key is not present"<<endl;
    }
    return 0;
}
