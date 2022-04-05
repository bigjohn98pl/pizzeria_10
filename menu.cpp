#include "menu.hpp"

menu::menu()
{

}
void menu::addPizza(pizza _pizza){
    this->pizzas.push_back(_pizza);
}
void menu::addDrink(drink _drink){
    this->drinks.push_back(_drink);
}
void menu::addMeal(meal _meal){
    this->meals.push_back(_meal);
}
