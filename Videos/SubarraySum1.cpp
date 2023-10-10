#include<iostream>
using namespace std;
//BruteForce
//timetaken O(N^3)
int LargestSubarraySum(int arr[],int n){
    int largestsum=0;
   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int SubarraySum=0;
        for(int k=i;k<=j;k++){
            SubarraySum +=arr[k];
        }
        largestsum= max(largestsum,SubarraySum);
    }
   }
   return largestsum;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<LargestSubarraySum(arr,n);
    return 0;
}