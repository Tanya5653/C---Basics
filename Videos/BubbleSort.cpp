#include<iostream>
using namespace std;
void BubbleSort(int a[], int n){
 for(int itr=1;itr<=n-1;itr++){
   for(int j=0;j<=(n-itr-1);j++){
    if (a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
   }
 }

}
int main(){
    int n;
    cout<<"enter how many no. of elements you want in a array: ";
    cin>>n;
    int a[1000];
    cout<<"enter the no. of elements in unsorted way: ";
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    BubbleSort(a,n);
    cout<<"sorted array is: ";
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<",";
    }
    return 0;
}