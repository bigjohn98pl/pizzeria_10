#ifndef MENU_HPP
#define MENU_HPP

#include "header.hpp"
#include "meal.hpp"
#include "card.hpp"

class menu
{
private:
    list<pizza*> pizzas;
    list<drink*> drinks;
    list<meal*> meals;
    card* shopingCard;
public:
    menu();
    void addPizza(pizza _pizza);
    void addDrink(drink _drink);
    void addMeal(meal _meal);
    void readDrinks();
    void readPizzas();
    void showMenu();
};

#endif // MENU_HPP
