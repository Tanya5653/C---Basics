#include<unordered_map>
#include<string>
using namespace std;

class Trie;

class Node{
    char data;
    unordered_map<char,Node*> m;    //char is datatype of unordered map and m is name of the map and Node* if the value type
    bool isTerminal;
public:
    Node(char d){
        data = d;
        isTerminal = false;
    }
    friend class Trie;
};
class Trie{
    Node* root;
public:
    Trie(){
        root = new Node('\0');
    }
    //insertion
    void insert(string word){
        Node* temp = root;
        for(char ch:word){
            if(temp->m.count(ch)==0){   //count is inbulit method that tells the key or char is preesnt in the map or not .
                Node* n = new Node(ch);
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    }
    //searching
    bool search(string word){
        Node* temp = root;
        for(char ch:word){
            if(temp->m.count(ch)==0){
                return false;
            }
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    }
};