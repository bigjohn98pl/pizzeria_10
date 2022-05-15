#include "pizza.hpp"

pizza::pizza(){
    id = new unsigned int;
    amount = new unsigned int;
    name = new string;
    price = new double;
    ingredients = new string;
}
pizza::pizza(pizza &copy,unsigned int &_amount){
    id = new unsigned int;
    amount = new unsigned int;
    name = new string;
    price = new double;
    ingredients = new string;

    *id = *copy.id;
    *amount = _amount;
    *name = *copy.name;
    *price = *copy.price;
    *ingredients = *copy.ingredients;
}
pizza::pizza(unsigned int &_id, string& _name, double& _price, string& _ingredients){

    id = new unsigned int;
    amount = new unsigned int;
    name = new string;
    price = new double;
    ingredients = new string;

    *id = _id;
    *amount = 1;
    *name = _name;
    *price = _price;
    *ingredients = _ingredients;
}
pizza::~pizza(){
    delete id;
    //delete amount;
    delete name;
    delete price;
    delete ingredients;
    id = nullptr;
    //amount = nullptr;
    name = nullptr;
    price = nullptr;
    ingredients = nullptr;
}
void pizza::set(string _name, double _price, string _ingredients){
    *name = _name;
    *price = _price;
    *ingredients = _ingredients;
}
void pizza::setAmount(unsigned int &_amount){
    *amount = _amount;
}
double pizza::getPrice(){
    return *price;
}
unsigned int pizza::getId(){
    return *id;
}
unsigned int pizza::getAmount(){
    return *amount;
}
void pizza::show(){
    cout << left << setw(NAME) << *name << right << setw(PRICE) << fixed << setprecision(2) << *price << left << setw(SPACE) << " zl  " << setw(INGREDIENTS) << *ingredients  << endl;
}
void pizza::show_2(){
        cout << left << setw(NAME) << *name << right << setw(PRICE) << fixed << setprecision(2) << *price << left << setw(SPACE) << " zl  " ;
        cout << "x" << *amount << " = " << *price * static_cast<double>(*amount) << " zl"<< endl;
}
