#include "drink.hpp"

drink::drink()
{
    name = new string;
    price= new double;
    size = new string;
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
void drink::show(){
    cout << "nazwa: " << *name << endl
         << "cena: " << *price << endl
         << "rozmiar: " << *size << endl << endl;
}
void readDrinks(){

    string name,size;
    double price;
    fstream  fin;
    fin.open("drinks.txt");

    while (fin >> name >> price >> size) {
       drink tmp(name,price,size);
       tmp.show();
    }
    fin.close();

}
