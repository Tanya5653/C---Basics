#include<iostream>
using namespace std;
//kadane's algorithm
//timetaken of order O(N)
int SubarraySum3(int arr[],int n){
    int cs=0;
    int largestsum=0;
    for(int i=0;i<n;i++){
        cs= cs+arr[i];
        if(cs<0){
            cs=0;
        }
            largestsum = max(largestsum,cs);
        }
    return largestsum;
    }

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n= sizeof(arr)/sizeof(int);
    cout<<SubarraySum3(arr,n)<<endl;
    return 0;
}