#include<iostream>
using namespace std;
void BubbleSortRec(int arr[],int n){
    //base case
    if(n==1){
        return;
    }
    for(int j=0;j<=n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    //rec case
    BubbleSortRec(arr,n-1);
}
int main(){
    int arr[]={-12, -2, 0 ,7 ,4 ,-4, 5};
    int n = sizeof(arr)/sizeof(int);
    BubbleSortRec(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}