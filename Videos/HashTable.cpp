#include<iostream>
#include"HashTable.h"
using namespace std;
int main(){
    HashTable<int> h;
    h.insert("mango",100);
    h.insert("orange",120);
    h.insert("gauava",140);
    h.insert("banana",200);
    h.insert("litchi",160);
    h.insert("papaya",180);
    h.insert("pineapple",240);
    h.insert("apple",280);
    h.print();

    string fruit;
    cout<<"enter fruit to search:";
    cin>>fruit;
    int *price = h.search(fruit);
    if(price!=NULL){
        cout<<"the price of fruit is:"<< *price <<endl;
    }
    else{
        cout<<"fruit is not present";
    }
    return 0;
}