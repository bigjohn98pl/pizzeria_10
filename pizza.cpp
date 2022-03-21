#include "pizza.hpp"

pizza::pizza(){
    name = new string;
    price = new double;
    ingredients = new string;
}
pizza::pizza(string& nam, double& pri, string& ing){
    name = &nam;
    price = &pri;
    ingredients = &ing;
}
pizza::~pizza(){
    delete name;
    delete price;
    delete ingredients;
}
void pizza::show(){
    cout << "nazwa: " << name << endl
         << "cena: " << price << endl
         << "skladniki: " << ingredients << endl;
}

