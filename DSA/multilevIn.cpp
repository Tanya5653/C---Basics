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

class Puppy: public Dog{
};

int main(){
    Puppy p;
    p.speak();
    return 0;
}