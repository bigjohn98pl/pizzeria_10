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
    cout << setw(NAME+PRICE) << "===================== ZESTAW =================" << endl;
    cout << setw(NAME) << "nazwa" << setw(PRICE) <<  "cena" << endl << endl;
    for (unsigned int i = 0;i < this->pizzas.size() ; i++ ) {
        this->pizzas[i]->show_2();
    }
    for (unsigned int i = 0;i < this->drinks.size() ; i++ ) {
        this->drinks[i]->show_2();
    }
    cout << endl;
    cout << setw(15) << "CENA ZA ZESTAW: " << setw(15) << getPrice() << endl;
}
