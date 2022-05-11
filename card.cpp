#include "card.hpp"

card::card()
{
    price = 0;
}

void card::addCardPizza(pizza &_pizza){
    this->cardPizzas.push_back(new pizza(_pizza));
    this->price += _pizza.getPrice();
}
void card::addCardDrink(drink &_drink){
    this->cardDrinks.push_back(new drink(_drink));
    this->price += _drink.getPrice();
}
void card::addCardMeal(meal &_meal){
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
    cout << "#######################################################" << endl;
    for(unsigned int i=0; i < cardPizzas.size();i++){
        cardPizzas[i]->show_2();
    }
    cout << endl;
    for(unsigned int i=0; i < cardDrinks.size();i++){
        cardDrinks[i]->show_2();
    }
    cout << endl;
    for(unsigned int i=0; i < cardMeals.size();i++){
        cardMeals[i]->show();
    }
    cout << endl;

    cout << "LACZNA CENA: " << setprecision(4) << price << endl;
    cout << "#######################################################" << endl;
}
