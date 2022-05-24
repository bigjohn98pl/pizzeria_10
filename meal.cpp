#include "meal.hpp"
meal::meal()
{
    id = new unsigned int;
    amount = new unsigned int;
    price = new double;
    pizzas.clear();
    drinks.clear();

    *price = 0;
    *amount =0;
    *id=0;
}
meal::meal(meal &copy,const unsigned int &_amount)
{
    id = new unsigned int;
    amount = new unsigned int;
    price = new double;

    pizzas.swap(copy.pizzas);
    drinks.swap(copy.drinks);

    *price = *copy.price;
    *amount = _amount;
    *id = *copy.id;
}
meal::meal(const unsigned int _id)
{
    id = new unsigned int;
    amount = new unsigned int;
    price = new double;

    pizzas.clear();
    drinks.clear();
    *price = 0;
    *amount =0;
    *id = _id;
}

meal::~meal()
{
}

void meal::addPizza(pizza *_pizza){
    this->pizzas.push_back(_pizza);
    *price += _pizza->getPrice();
}
void meal::addPizza(pizza *_pizza, unsigned int _amount){
    this->pizzas.push_back(_pizza);
    pizzas.back()->setAmount(_amount);
    *price += _pizza->getPrice() * _pizza->getAmount();
}
void meal::addDrink(drink *_drink){
    this->drinks.push_back(_drink);
    *price += _drink->getPrice();
}
void meal::addDrink(drink *_drink, unsigned int _amount){
    this->drinks.push_back(_drink);
    drinks.back()->setAmount(_amount);
    *price += _drink->getPrice() * _drink->getAmount();
}

double meal::getPrice(){
    return *this->price;
}
unsigned int meal::getId(){
    return *id;
}
unsigned int meal::getAmount(){
    return *amount;
}

void meal::show(){
    cout << "================== Zestaw: " << *id << "=======================" << endl;
    cout << left << setw(NAME) << "nazwa" << setw(PRICE) <<  "cena" << endl << endl;
    for (unsigned int i = 0;i < this->pizzas.size() ; i++ ) {
        this->pizzas[i]->show_2();
    }
    for (unsigned int i = 0;i < this->drinks.size() ; i++ ) {
        this->drinks[i]->show_2();
    }
    cout << endl;
    cout << setw(15) << "CENA ZA ZESTAW: " << setw(15) << *price << " x " << *amount << " = " << *price * static_cast<double>(*amount) << " zl" << endl;
}
