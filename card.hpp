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

    void addCardPizza(pizza &_pizza, unsigned int &_amount, bool isFree);
    void addCardDrink(drink &_drink, unsigned int &_amount, bool isFree);
    void addCardMeal(meal &_meal, const unsigned int &_amount);
    vector<pizza*>& getPizzas();
    vector<drink*>& getDrinks();
    vector<meal*>& getMeals();
    double getPrice();
    void setPrice20();
    bool checkCardPrice();
    bool checkHalfMealPrice();

    void showPrice();
    void showCard();
    void showReceipt();

};

#endif // CARD_HPP
