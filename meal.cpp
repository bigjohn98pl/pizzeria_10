#include "meal.hpp"

meal::meal()
{
    price = new double;
    price = 0;
}
meal::~meal()
{
    delete price;
}
void meal::addPizza(pizza _pizza){
    pizzas.push_back(_pizza);
    *price += _pizza.getPrice();
}
void meal::addDrink(drink _drink){
    drinks.push_back(_drink);
    *price += _drink.getPrice();
}
double meal::getPrice(){
    return *this->price;
}
void meal::show(){
    cout << "()()()()()()()()()()()()Pizzas()()()()()()()()()()()()()()" << endl;
    for (unsigned int i = 0;i < this->pizzas.size() ; i++ ) {
        this->pizzas[i].show();
    }
    cout << "-------------------------Drinks---------------------------" << endl;
    for (unsigned int i = 0;i < this->drinks.size() ; i++ ) {
        this->drinks[i].show();
    }
    cout << "()()()()()()()()()()()()()()()()()()()()()()()()()()" << endl;
}
