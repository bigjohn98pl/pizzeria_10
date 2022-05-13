#include "menu.hpp"

menu::menu()
{
    readPizzas();
    readDrinks();
    meal mealOne,mealTwo,mealTree;
    mealOne.addPizza(pizzas[1]);
    mealOne.addPizza(pizzas[3]);
    mealOne.addDrink(drinks[0]);

    mealTwo.addPizza(pizzas[1]);
    mealTwo.addDrink(drinks[0]);
    mealTwo.addDrink(drinks[0]);

    mealTree.addPizza(pizzas[2]);
    mealTree.addPizza(pizzas[2]);
    mealTree.addDrink(drinks[0]);
    mealTree.addDrink(drinks[0]);

    this->addMeal(mealOne);
    this->addMeal(mealTwo);
    this->addMeal(mealTree);

}
void menu::addPizza(pizza _pizza){
    this->pizzas.push_back(new pizza(_pizza));
}

void menu::addDrink(drink _drink){
    this->drinks.push_back(new drink(_drink));
}

void menu::addMeal(meal _meal){
    this->meals.push_back(new meal(_meal));
}

void menu::readPizzas(){

    string name,ingredients,line;
    string sPrice;
    double price;
    fstream  fin;
    fin.open("pizzas.txt");
    if( fin.good() != true )
    {
    cout << "error - no such file or directory" << endl;
    }

    while(!fin.eof()){
        getline(fin, name,'\t');
        getline(fin, sPrice,'\t');
        getline(fin, ingredients);
        price = stod(sPrice);
        pizzas.push_back(new pizza(name,price,ingredients));
    }
    fin.close();
}

void menu::readDrinks(){

    string name,size, line, sPrice;
    double price;
    fstream  fin;
    fin.open("drinks.txt");
    if( fin.good() != true )
    {
    cout << "error - no such file or directory" << endl;
    }

    while (!fin.eof()) {
        getline(fin, name,'\t');
        getline(fin, sPrice,'\t');
        getline(fin, size);
        price= stod(sPrice);
        drinks.push_back(new drink(name,price,size));
    }
    fin.close();
}
void menu::showPizzas(){
    cout << setw(NAME) << "nazwa" << setw(PRICE) <<  "cena" << setw(INGREDIENTS) << "skladniki"  << endl;
    for(unsigned int i=0; i < pizzas.size();i++){
        pizzas[i]->show();
    }
}
void menu::showDrinks(){
    cout << setw(NAME) << "nazwa" << setw(PRICE) <<  "cena" << setw(INGREDIENTS) << "rozmiar"  << endl;
    for (unsigned int i = 0; i < drinks.size() ; i++ ) {
        drinks[i]->show();
    }
}
void menu::showMeals(){
    for (unsigned int i = 0; i < meals.size() ; i++ ) {
        meals[i]->show();
    }
}
void menu::showMenu(){
    unsigned int clientChoose = 0;
    bool shoudShopping = true;
    unsigned int number=0, howMuch=0;

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
            this->showPizzas();
            while(clientChoose!=0){

                cout << "1. Zamow" << endl;
                cout << "0. Powrot do menu" << endl;
                cin >> clientChoose;
                switch(clientChoose){
                case 1:

                    cout << "Podaj numer pizzy, ktora chcesz zamowic: ";
                    cin >> number;
                    cout << "Podaj ilosc: ";
                    cin >> howMuch;

                    for(unsigned int i=0;i<howMuch;i++) {

                        shopingCard.addCardPizza(*pizzas[number-1]);
                    }
                    number=0;
                    howMuch=0;
                    break;
                case 0:

                    break;
                }
            }
            break;

        case 2:
            this->showDrinks();
            while(clientChoose!=0){

                cout << "1. Zamow" << endl;
                cout << "0. Powrot do menu" << endl;
                cin >> clientChoose;
                switch(clientChoose){
                case 1:

                    cout << "Podaj numer napoju, ktory chcesz zamowic: ";
                    cin >> number;
                    cout << "Podaj ilosc: ";
                    cin >> howMuch;

                    for(unsigned int i=0;i<howMuch;i++) {

                        shopingCard.addCardDrink(*drinks[number-1]);
                    }
                    number=0;
                    howMuch=0;
                    break;
                case 0:

                    break;
                }
            }
            break;

        case 3:
            this->showMeals();
            while(clientChoose!=0){

                cout << "1. Zamow" << endl;
                cout << "0. Powrot do menu" << endl;
                cin >> clientChoose;
                switch(clientChoose){
                case 1:

                    cout << "Podaj numer zestawu, ktory chcesz zamowic: ";
                    cin >> number;
                    cout << "Podaj ilosc: ";
                    cin >> howMuch;

                  for(unsigned int i=0;i<howMuch;i++) {

                        shopingCard.addCardMeal(*meals[number-1]);
                  }
                  number=0;
                  howMuch=0;
                  break;
                case 0:

                    break;
                }
            }
            break;

        case 4:
            shopingCard.showCard();
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

