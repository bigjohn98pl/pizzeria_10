#ifndef MEAL_HPP
#define MEAL_HPP

#include "pizza.hpp"
#include "drink.hpp"

class meal{

    vector<pizza*> pizzas;
    vector<drink*> drinks;
    double price;

private:

public:

    meal();
    ~meal();
    void addPizza(pizza *_pizza);
    void addDrink(drink *_drink);
    void show();
    double getPrice();
};

#endif // MEAL_HPP
