#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
void BubbleSort(vector<int> & a,int n){
    for(int itr=1;itr<=n-1;itr++){
        for(int j=0;j<=n-itr-1;j++){
            if(compare(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);

    for(int i=0;i<n;i++){
        arr[i]= n-i ;
    }

    auto start_time= clock();
    BubbleSort(arr,n);
    auto end_time = clock();
       
    cout<<end_time-start_time<<endl;
    return 0;
}