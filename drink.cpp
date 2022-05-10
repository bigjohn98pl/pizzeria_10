#include "drink.hpp"

drink::drink()
{
    name = new string;
    price= new double;
    size = new string;
    *name = "nobody";
    *price = 99.66;
    *size = "BIG";
}
drink::drink(string& _name, double& _price, string& _size)
{
    name = new string;
    price= new double;
    size = new string;
    *name = _name;
    *price= _price;
    *size = _size;
}
drink::~drink(){
    delete name;
    delete price;
    delete size;
}
double drink::getPrice(){
    return *price;
}
drink drink::set(string& _name,double& _price, string& _size){
    *name = _name;
    *price = _price;
    *size = _size;
    return *this;
}
void drink::show(){
    cout << setw(NAME) << *name << setw(PRICE) << *price << setw(SIZE) << *size << endl;
}
void drink::show_2(){
    cout << setw(NAME) << *name << setw(PRICE) << *price << setw(SIZE) << *size << endl;
}
