#include<iostream>
#include"Trie.h"
using namespace std;
int main(){
    string words[]= {"hello","he","apple","ape","news"};
    Trie t;

    for(auto word:words){
        t.insert(word);
    }

    string key;
    cout<<"enter word to search:";
    cin>>key;
    cout<<t.search(key)<<endl;

    return 0;
}