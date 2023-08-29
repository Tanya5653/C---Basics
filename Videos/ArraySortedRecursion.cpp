#include<iostream>
using namespace std;
bool isSorted(int a[],int n){ //or boolisSorted(int *a,int n){
    if(n==0 or n==1){
        return true;
    }
    if(a[0]<a[1] and isSorted(a+1,n-1)){
        return true;
    }
    return false;

}
int main(){
    int a[100];  //int arr[]={1, 5 7 8 3};
    int n,i;     //int n=sizeof(arr)/sizeof(int);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<isSorted(a,n)<<endl;
    return 0;
}
