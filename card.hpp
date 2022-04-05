#ifndef CARD_HPP
#define CARD_HPP

#include "header.hpp"
#include "menu.hpp"

class card
{
private:
    double price;
    list<pizza*> cardPizzas;
    list<drink*> cardDrinks;
    list<meal*> cardMeals;
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
