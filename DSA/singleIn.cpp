#include<iostream>
using namespace std;
class Animal{
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"SPEAKING"<<endl;
    }
};

class Dog:public Animal{
};

int main(){
    Dog d;
    d.speak();
    return 0;
}