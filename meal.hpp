#ifndef MEAL_HPP
#define MEAL_HPP

#include "pizza.hpp"
#include "drink.hpp"

class meal
{
    list<pizza> pizzas;
    list<drink> drinks;
    double* price;
private:

public:
    meal();
    ~meal();
    void addPizza(pizza _pizza);
    void addDrink(drink _drink);
};

#endif // MEAL_HPP
