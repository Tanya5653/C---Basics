#include<iostream>
using namespace std;
bool SortedArr(int arr[],int n){
    //base case
 if(n==0 or n==1){
    return true;
 }
    //recursive case
 if(arr[0]<arr[1] and SortedArr(arr+1,n-1)){
    return true;
 }
 return false;
}
int main(){
int arr[]={1,3,5,7,8};
int n= sizeof(arr)/sizeof(int);
cout<<SortedArr(arr,n);
return 0;
}