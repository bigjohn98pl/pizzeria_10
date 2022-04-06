#ifndef MENU_HPP
#define MENU_HPP

#include "header.hpp"
#include "meal.hpp"
#include "card.hpp"

class menu{

private:

    vector<pizza*> pizzas;
    vector<drink*> drinks;
    vector<meal*> meals;
    card* shopingCard;

public:

    menu();
    void addPizza(pizza _pizza);
    void addDrink(drink _drink);
    void addMeal(meal _meal);
    void readDrinks();
    void readPizzas();
    void showPizzas();
    void showDrinks();
    void showMeals();
    void showMenu();
};

#endif // MENU_HPP
