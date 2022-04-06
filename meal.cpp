#include "meal.hpp"

meal::meal()
{
    pizzas.clear();
    drinks.clear();
    price = 0;
}
meal::~meal()
{
}
void meal::addPizza(pizza *_pizza){
    this->pizzas.push_back(_pizza);
    price += _pizza->getPrice();
}
void meal::addDrink(drink *_drink){
    this->drinks.push_back(_drink);
    price += _drink->getPrice();
}
double meal::getPrice(){
    return this->price;
}
void meal::show(){
    cout << setw(70) << "================================= Pizze =============================" << endl;
    cout << setw(15) << "nazwa" << setw(15) <<  "cena" << setw(INGREDIENTS) << "skladniki"  << endl << endl;
    for (unsigned int i = 0;i < this->pizzas.size() ; i++ ) {
        this->pizzas[i]->show();
    }
    cout << setw(70) << "================================= Napoje ============================" << endl;
    cout << setw(15) << "nazwa" << setw(15) <<  "cena" << setw(15) << "rozmiar"  << endl << endl;
    for (unsigned int i = 0;i < this->drinks.size() ; i++ ) {
        this->drinks[i]->show();
    }
    cout << setw(70) << "|--------------------------- Cena-----------------------------|" << endl;
    cout << setw(30) << getPrice() << endl;
    cout << setw(70) << "|-------------------------------------------------------------|" << endl;
}
