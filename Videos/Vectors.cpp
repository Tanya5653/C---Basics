#include<iostream>
#include<vector>
using namespace std;
int main(){
    //DemoVector
    //vector<int> arr={0,1,5,7,3};
    //FillConstructor
    vector<int> arr(10,5);
    //Pop_Back
    arr.pop_back();
    //InsertaNewElement i.e, Push_Back
    arr.push_back(16);
    //PrintAllElementsOfVectors
    for(int i=0;i<arr.size();i++){
     cout<<arr[i]<<endl;
    }
    /*SizeOfVector(no of elements)
    cout<<arr.size()<<endl;
    //capacityOfVector(memorallocated)
    cout<<arr.capacity()<<endl;*/
    return 0;

}