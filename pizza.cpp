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
void pizza::set(string& _name, double& _price, string& _ingredients){
    *name = _name;
    *price = _price;
    *ingredients = _ingredients;
}
void pizza::show(){
    cout << "nazwa: " << *name << endl
         << "cena: " << *price << endl
         << "skladniki: " << *ingredients << endl << endl;
}

void readPizzas(){

    string name,ingredients;
    double price;
    fstream  fin;
    fin.open("pizzas.txt");

    while (fin >> name >> price >> ingredients) {
       pizza p(name,price,ingredients);
       p.show();
    }
    fin.close();

}
