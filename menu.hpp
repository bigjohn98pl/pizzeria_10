#ifndef MENU_HPP
#define MENU_HPP

#include "header.hpp"
#include "meal.hpp"

class menu
{
private:
    list<pizza*> pizzas;
    list<drink*> drinks;
    list<meal*> meals;
public:
    menu();
    void addPizza(pizza _pizza);
    void addDrink(drink _drink);
    void addMeal(meal _meal);
    void readDrinks();
    void readPizzas();
};

#endif // MENU_HPP
