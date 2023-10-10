#include<iostream>
using namespace std;

void SelectionSort(int a[],int n){
 for(int pos=0;pos<n-2;pos++){
    int current=a[pos];
    int min_Position = pos;
    
    for(int j=pos;j<n;j++){
        if(a[j]<a[min_Position]){
            min_Position=j;
        }
    }
    swap(a[min_Position],a[pos]);
 }
}
int main(){
    int arr[]={-12,5,3,2,6,-1,-4};
    int n= sizeof(arr)/sizeof(int);
    SelectionSort(arr,n);
    for(auto x :arr){
        cout<<x<<",";
    }
    return 0;
}