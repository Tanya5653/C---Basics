#include<iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"inside parent class..."<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"inside 1st derived class..."<<endl<<endl;
    }
};
class C:public A{
    public:
    void func3(){
        cout<<"inside 2nd derived class..."<<endl;
    }
};
int main(){
    B obj1;
    obj1.func1();
    obj1.func2();
    C obj2;
    obj2.func1();
    obj2.func3();
    return 0;
}