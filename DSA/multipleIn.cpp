#include<iostream>
using namespace std;
class Animal{
    public:
    int weight;
    int age;

    public:
    void bark(){
        cout<<"BARKING"<<endl;
    }
};

class Human{
    public:
    string name;

    public:
    void speak(){
        cout<<"SPEAKING"<<endl;
    }
};
//multiple inheritance
class Vampire: public Animal,public Human{
};

int main(){
    Vampire obj1;;
    obj1.speak();
    obj1.bark();
    return 0;
}