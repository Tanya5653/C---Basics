#include<iostream>
using namespace std;
int BinarySearch(int a[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key=0;
    cout<<"Enter the key you want to search: ";
    cin>>key;
    /*int ans = BinarySearch(a,n,key);
    ans==-1?cout<<"not present" : cout<< ans;*/
    cout<<BinarySearch(a,n,key)<<" is the index of the key.";
    return 0;
}