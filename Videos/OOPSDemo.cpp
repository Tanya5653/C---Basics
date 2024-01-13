#include<iostream>
using namespace std;
class Product{
    private://by default access specifier
    int id;
    char name[100];
    public://access specifier
    int mrp;
    int SellingPrice;
};
int main(){
    Product camera;  //object of class is made i.e,camera;
    camera.mrp = 100;
    camera.SellingPrice = 50;   //accessing class using dot operator
    cout<<"PRODUCT SIZE:"<<sizeof(Product)<<endl;
    cout<<"SellingPrice:"<<camera.SellingPrice<<endl;
    cout<<"MRP:"<<camera.mrp<<endl;
    return 0;
}