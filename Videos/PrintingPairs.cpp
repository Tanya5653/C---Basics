#include<iostream>
using namespace std;
void PrintingPairs(int arr[],int n){
    for(int i=0;i<n;i++){
        int x=arr[i];
        for(int j=0;j<n;j++){
            int y=arr[j];
             cout<<x<<","<<y<<endl;
        }
         cout<<endl;
    }
   
}
int main(){
    int arr[]={10,50,60,30,40};
    int n=sizeof(arr)/sizeof(int);
    PrintingPairs(arr,n);
    return 0;
}