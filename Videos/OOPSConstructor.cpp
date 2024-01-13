#include<iostream>
using namespace std;
class Product{
private:
    int id;
    char name[100];
    int mrp;
    int SellingPrice;
public:
//CONSTRUCTOR INITIALIZED
Product(){
    cout<<"..CONSTRUCTOR.."<<endl;
}
//PARAMAETERIZED CANSTRUCTOR
Product(int id,char *n,int mrp,int SellingPrice){
    this->id = id;
    this->mrp = mrp;
    this->SellingPrice = SellingPrice;
    strcpy(name,n);
}
    //SETTERS
    void setMrp(int price){
        if(price>0){
            mrp = price;
        }
    }
    void setSellingPrice(int price){
        if(price>mrp){
            SellingPrice = mrp;
        }
        else{
            SellingPrice = price;
        }

    }
    //GETTERS
    int getMrp(){
        return mrp;
    }
    int getSellingPrice(){
        return SellingPrice;
    }
};
int main(){
    cout<<"CONSTRUCTOR CALLED:"<<endl;
    Product camera;                   //CONSTRUCTOR AUTOMATICALLY CALLED
    cout<<"PARAMETERIZED CONSTRUCTOR CALLED:"<<endl;
    Product(100,"MACBOOK",100000,70000);
    //camera.setMrp(100);
    //camera.setSellingPrice(20);
    cout<<"Size:"<<sizeof(camera)<<endl;
    cout<<"MRP:"<<camera.getMrp()<<endl;
    cout<<"SellingPrice:"<<camera.getSellingPrice()<<endl;
    return 0;
}