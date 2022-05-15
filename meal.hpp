#ifndef MEAL_HPP
#define MEAL_HPP

#include "pizza.hpp"
#include "drink.hpp"

class meal{

    unsigned int *id;
    unsigned int *amount;
    vector<pizza*> pizzas;
    vector<drink*> drinks;
    double *price;

private:

public:

    meal();
    meal(const unsigned int _id);
    meal(meal &copy,unsigned int &_amount);
    meal(const unsigned int &_id,pizza *_pizza,unsigned int &pizzaAmount,drink *_drink, unsigned int &drinkAmount);
    ~meal();
    void addPizza(pizza *_pizza);
    void addPizza(pizza *_pizza, unsigned int _amount);
    void addDrink(drink *_drink);
    void addDrink(drink *_drink, unsigned int _amount);
    void show();
    double getPrice();
    unsigned int getId();
    unsigned int getAmount();
};
#endif // MEAL_HPP
