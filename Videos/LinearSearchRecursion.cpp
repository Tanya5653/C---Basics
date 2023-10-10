#include<iostream>
using namespace std;
int firstocc(int*a,int n,int key){
    if(n==0){
        return -1;
    }
    if(a[0]==key){
        return 0;
    }
    int i=firstocc(a+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;
}
/*int LinearSearch(int *arr,int i,int n,int key){
    //base
    if(i==n){
        return -1;
    }
    //rec
    if(arr[i]==key){
        return i;
    }
    return LinearSearch(arr,i+1,n,key);
}*/
int main(){
    int arr[]={1,2,4,5,6,7};
    int key=4;
    int n=sizeof(arr)/sizeof(int);
    cout<<firstocc(arr,n,key);
    return 0;
}