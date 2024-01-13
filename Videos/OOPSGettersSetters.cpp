#include<iostream>
using namespace std;
class Product{
private:
    int id;
    char name[100];
    int mrp;
    int SellingPrice;
public:
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
    Product camera;
    camera.setMrp(100);
    camera.setSellingPrice(20);
    cout<<"Size:"<<sizeof(camera)<<endl;
    cout<<"MRP:"<<camera.getMrp()<<endl;
    cout<<"SellingPrice:"<<camera.getSellingPrice()<<endl;
    return 0;
}