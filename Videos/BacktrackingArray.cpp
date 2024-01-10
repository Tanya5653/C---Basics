#include<iostream>
using namespace std;
void PrintArray(int*arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void FillArray(int*arr,int i,int n,int val){
    //base case
    if(i==n){
        PrintArray(arr,n);
        return;
    }
    //rec case
    arr[i]=val;
    FillArray(arr,i+1,n,val+1);
    //backtracking
    arr[i]=-1*arr[i];

}
int main(){
    int arr[100] = {0};
    int n;
    cin>>n;
    FillArray(arr,0,n,1);
    PrintArray(arr,n);
    return 0;
}