#ifndef MENU_HPP
#define MENU_HPP

#include "header.hpp"
#include "pizza.hpp"
#include "drink.hpp"
#include "meal.hpp"

class menu
{
private:
    static list<pizza> pizzas;
    static list<drink> drinks;
    static list<meal> meals;
public:
    menu();
    void addPizza(pizza _pizza);
    void addDrink(drink _drink);
    void addMeal(meal _meal);
};
list<pizza> menu::pizzas;
list<drink> menu::drinks;
list<meal> menu::meals;
#endif // MENU_HPP
