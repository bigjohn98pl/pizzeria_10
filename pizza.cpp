#include "pizza.hpp"

pizza::pizza(){
    name = new string;
    price = new double;
    ingredients = new string;
}
pizza::pizza(string& _name, double& _price, string& _ingredients){
    name = new string;
    price = new double;
    ingredients = new string;
    *name = _name;
    *price = _price;
    *ingredients = _ingredients;
}
pizza::~pizza(){
    delete name;
    delete price;
    delete ingredients;
}
void pizza::set(string _name, double _price, string _ingredients){
    *name = _name;
    *price = _price;
    *ingredients = _ingredients;
}
double pizza::getPrice(){
    return *price;
}
void pizza::show(){
    cout << left << setw(NAME) << *name << right << setw(PRICE) << fixed << setprecision(2) << *price << left << setw(SPACE) << " zl  " << setw(INGREDIENTS) << *ingredients  << endl;
}
void pizza::show_2(){
        cout << left << setw(NAME) << *name << right << setw(PRICE) << fixed << setprecision(2) << *price << left << setw(SPACE) << " zl  " << endl;
}
