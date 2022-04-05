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

