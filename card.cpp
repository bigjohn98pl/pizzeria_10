#include "card.hpp"         //
#include <time.h>           //
#include <conio.h>

card::card()
{
    price = 0;
}

void card::addCardPizza(pizza &_pizza,unsigned int &_amount, bool isFree){
    this->cardPizzas.push_back(new pizza(_pizza,_amount));
    if(!isFree){
        this->price += _pizza.getPrice()*_amount;
    }

}
void card::addCardDrink(drink &_drink,unsigned int &_amount,bool isFree){
    this->cardDrinks.push_back(new drink(_drink,_amount));

    if(!isFree){
        this->cardDrinks.back()->setIsFree(false);
        this->price += _drink.getPrice()*_amount;
    }
    else{
        this->cardDrinks.back()->setIsFree(true);
    }
}
void card::addCardMeal(meal &_meal, unsigned int &_amount){
    this->cardMeals.push_back(new meal(_meal,_amount));
    this->price += _meal.getPrice()*_amount;
}
vector<pizza*>& card::getPizzas(){
    return cardPizzas;
}
vector<drink*>& card::getDrinks(){
    return cardDrinks;
}
vector<meal*>& card::getMeals(){
    return cardMeals;
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
    cout << "                       KOSZYK                          " << endl;
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

    cout << "LACZNA CENA: " << right << setw(NAME+PRICE+3) << setprecision(2) << price << endl;
    cout << "#######################################################" << endl;
}

void card::showReceipt(){
    cout << "#######################################################" << endl;
    cout << endl;
    cout << "-----------------PIZZERIA BIT PIZZA--------------------" << endl << endl;
    cout << "33-100, Tarnow, ul. Maslana 52" << endl;
    cout << "NIP: 420-21-37-666                              W208799" << endl;
    cout << endl << "                   PARAGON FISKALNY                    " << endl;
    cout << endl << endl;
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
    cout << endl;               //data godzina
    cout << "Suma: "<< setprecision(4) << price << "zl" << endl;
    cout << endl << "DO ZAPLATY: " << setprecision(4) << price << "zl" << endl << endl;

    time_t czas;                //
    struct tm *data;              //
    char godzina[80];           //
    time(&czas);                //
    data= localtime(&czas);      //
    setlocale(LC_ALL, "Polish");    //
    strftime(godzina, sizeof(godzina), "Data i godzina: %c", data);    //
    cout << godzina;                //

    cout << endl << endl << "AB34576965NJNJ7JBVHH45B6H47B7JNN8BVNK4YNBO7BN7NB854VNVF" << endl;
    cout << "Nr Sys.:                                    FPP PA:Data" << endl;
    cout << "#######################################################" << endl;
    getch();
}
