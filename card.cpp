#include "card.hpp"

card::card()
{
    price = 0;
}

void card::addCardPizza(pizza _pizza){
    this->cardPizzas.push_back(new pizza(_pizza));
    this->price += _pizza.getPrice();
}
void card::addCardDrink(drink _drink){
    this->cardDrinks.push_back(new drink(_drink));
    this->price += _drink.getPrice();
}
void card::addCardMeal(meal _meal){
    this->cardMeals.push_back(new meal(_meal));
    this->price += _meal.getPrice();
}
double card::getPrice(){
    return price;
}

void card::showPrice(){
    cout << "-----------------------------" << endl;
    cout << "Do zaplaty: "<< price << endl;
    cout << "-----------------------------" << endl;
}
void card::showCard(){
//pokazuje mi co wybralam zrob to!!
}
