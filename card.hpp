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
    bool saleFreeDrink,saleOff20,saleFifFif;

public:
    card();
    void addCardPizza(pizza &_pizza, unsigned int &_amount, bool isFree);
    void addCardDrink(drink &_drink, unsigned int &_amount, bool isFree);
    void addCardMeal(meal _meal, const unsigned int &_amount);
    vector<pizza*>& getPizzas();
    vector<drink*>& getDrinks();
    vector<meal*>& getMeals();
    double getPrice();
    void setPrice20();
    bool checkCardPrice();

    bool checkHalfMealPrice();
    bool check2PizzasFreeDrink();
    bool getSaleFreeDrink(){return saleFreeDrink;};
    bool getSaleOff20(){return saleOff20;};
    bool getSaleFifFif(){return saleFifFif;};
    void setSaleFreeDrink(const bool &set){saleFreeDrink = set;};
    void setSaleOff20(const bool &set){saleOff20 = set;};
    void setSaleFifFif(const bool &set){saleFifFif = set;};

    void showPrice();
    void showCard();
    void showReceipt();
};

#endif // CARD_HPP
