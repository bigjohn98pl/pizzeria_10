#ifndef MENU_HPP
#define MENU_HPP

#include "header.hpp"
#include "pizza.hpp"
#include "drink.hpp"
#include "meal.hpp"

class menu
{
private:
    list<pizza> pizzas;
    list<drink> drinks;
    list<meal> meals;
public:
    menu();
};

#endif // MENU_HPP
