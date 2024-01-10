#include<iostream>
#include<vector>
using namespace std;
int Partition(vector<int> &a,int s, int e){
    int pivot = a[e];
    int i =s-1;

    for(int j=s;j<e;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void QuickSort(vector<int> &a,int s,int e){
    if(s>=e){
        return;
    }
    //rec case
    int p= Partition(a,s,e);
    QuickSort(a,s,p-1);
    QuickSort(a,p+1,e);
}
int main(){
    vector<int> arr{10,5,7,2,6,0,4};
    int n= arr.size();
    QuickSort(arr,0,n-1);
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}