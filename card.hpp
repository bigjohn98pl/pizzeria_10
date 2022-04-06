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

    void addCardPizza(pizza _pizza);
    void addCardDrink(drink _drink);
    void addCardMeal(meal _meal);
    double getPrice();

    void showPrice();
    void showCard();
};

#endif // CARD_HPP
