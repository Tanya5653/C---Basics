#include<iostream>
using namespace std;
void PrintingSubarrays(int arr[],int n){
   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            cout<<arr[k]<<",";
        }
        cout<<endl;
    }
    cout<<endl;
   }
}
int main(){
    int arr[]={10,50,60,30,40};
    int n=sizeof(arr)/sizeof(int);
    PrintingSubarrays(arr,n);
    return 0;
}