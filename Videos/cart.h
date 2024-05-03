#include<string>
using namespace std;
class Item;
class Product{
    int id;
    string name;
    int price;
public:
    Product(int u_id, string name, int price){
        id = u_id;
        this->name = name;
        this->price = price;
    }
    string DisplayProduct(){
        return to_string(id) +"  " + name + " :Rs " + to_string(price)  + "\n";
    }
    string getShortName(){
        return name.substr(0,1);
    }
    friend class Item;
};
class Item{
    const Product product;
    int quantity;
public:
    Item(Product p, int q):product(p),quantity(q){} 
    int getPrice(){
        return product.price * quantity;
    }
    string getItemInfo(){
        return to_string(quantity) + " x " + product.name + " =Rs " + to_string(quantity*product.price);
    }
};
class Cart{

};