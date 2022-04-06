#include "menu.hpp"

menu::menu()
{
    readPizzas();
    readDrinks();
}
void menu::addPizza(pizza _pizza){
    this->pizzas.push_back(&_pizza);
}
void menu::addDrink(drink _drink){
    this->drinks.push_back(&_drink);
}
void menu::addMeal(meal _meal){
    this->meals.push_back(&_meal);
}
void menu::readPizzas(){

    string name,ingredients;
    double price;
    fstream  fin;
    fin.open("pizzas.txt");

    while (fin >> name >> price >> ingredients) {
        pizzas.push_back(new pizza(name,price,ingredients));

    }
    fin.close();

}

void menu::readDrinks(){

    string name,size;
    double price;
    fstream  fin;
    fin.open("drinks.txt");

    while (fin >> name >> price >> size) {
        drinks.push_back(new drink(name,price,size));
    }
    fin.close();

}

void menu::showMenu(){
    unsigned int clientChoose = 0;
    bool shoudShopping = true;

    while(shoudShopping){

        cout << "--------------------------------------------\n";
        cout << "Witamy w naszej Pizzeri!" << endl;
        cout << "--------------------------------------------\n";
        cout << "1. Lista Pizz'e" << endl;
        cout << "2. Lista napoji" << endl;
        cout << "3. Lista zestawów" << endl;
        cout << "4. Koszyk" << endl;
        cout << "5. Wyjdz" << endl;

        cin >> clientChoose;

        switch (clientChoose){
        case 1:
            this->pizzas.showPizzas();
            break;
        case 2:
            this->drinks.showDrinks();
            break;
        case 3:
            this->meals.showMeals();
            break;
        case 4:
            shopingCard->showCard();
            break;
        case 5:
            shoudShopping = false;
            cout << "--------------------------------------------\n";
            cout << "Dziekujemy za zamowienie!" << endl;
            cout << "--------------------------------------------\n";
            break;
        default:
            cout << "Nieprawidłowy nr, podaj liczbe z przedzialu od 1 do 5." << endl;
            break;
        }

    }
}

