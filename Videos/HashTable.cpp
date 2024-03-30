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
    return 0;
}