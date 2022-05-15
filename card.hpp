#ifndef CARD_HPP
#define CARD_HPP

#include "header.hpp"
#include "pizza.hpp"
#include "drink.hpp"
#include "meal.hpp"

class card{

private:

    double price;

    vector<pizza*> cardPizzas;
    vector<drink*> cardDrinks;
    vector<meal*> cardMeals;

public:
    card();

    void addCardPizza(pizza &_pizza,unsigned int &_amount);
    void addCardDrink(drink &_drink,unsigned int &_amount);
    void addCardMeal(meal &_meal,unsigned int &_amount);
    double getPrice();

    void showPrice();
    void showCard();
    void showReceipt();

};

#endif // CARD_HPP
