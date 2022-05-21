#include "menu.hpp"

menu::menu()
{
    readPizzas();
    readDrinks();

    meal meal1(1),meal2(2),meal3(3),meal4(4);

    meal1.addPizza(pizzas[1],1);
    meal1.addPizza(pizzas[3],1);
    meal1.addDrink(drinks[0],1);

    meal2.addPizza(pizzas[1]);
    meal2.addDrink(drinks[0],1);

    meal3.addPizza(pizzas[2],1);
    meal3.addDrink(drinks[0],2);

    meal4.addPizza(pizzas[5],2);
    meal4.addDrink(drinks[3],2);

    this->addMeal(meal1);
    this->addMeal(meal2);
    this->addMeal(meal3);
    this->addMeal(meal4);

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

//take from http://stackoverflow.com/a/236803/248823
void split(const string &s, char delim, vector<string> &elems) {
   stringstream ss;
   ss.str(s);
   string item;
   while (getline(ss, item, delim)) {
       elems.push_back(item);
   }
}

void menu::readPizzas(){

    string line;
    double price;
    ifstream  file;
    unsigned int id =0;
    file.open("pizzas.txt");
    if( file.good() != true )
    {
        cout << "error - no such file or directory (pizzas.txt)" << endl;
        system("PAUSE");
    }

    while(getline(file, line)){
        vector<string> pizzaData;
        split(line,'\t',pizzaData);
        if(pizzaData.size() >= 3){
            price = stod(pizzaData[1]);
            pizzas.push_back(new pizza(++id,pizzaData[0],price,pizzaData[2]));
        }
    }

    file.close();
}

void menu::readDrinks(){

    string line;
    double price;
    ifstream  file;
    unsigned int id =0;
    file.open("drinks.txt");
    if( file.good() != true )
    {
        cout << "error - no such file or directory (drinks.txt)" << endl;
        system("PAUSE");
    }

    while (getline(file,line)) {
        vector<string> drinkData;
        split(line,'\t',drinkData);
        if(drinkData.size() >=3 ){
            price= stod(drinkData[1]);
            drinks.push_back(new drink(++id,drinkData[0],price,drinkData[2]));
        }


    }

    file.close();
}
void menu::readSales(){
    ifstream salesFile;
    string line;
    salesFile.open("sales.txt");
    if( salesFile.good() != true )
    {
        cout << "error - no such file or directory" << endl;
    }

    while (getline(salesFile, line)) {
        cout << line << endl;
    }
    salesFile.close();

}
void menu::showPizzas(){
    cout << left << setw(3) << " nr." << setw(NAME) << " nazwa " << right << setw(PRICE) << " cena " << left << "     " << setw(INGREDIENTS) << " skladniki "  << endl << endl;
    for(unsigned int i=0; i < pizzas.size();i++){
        cout << setw(3) << i+1 << " ";
        pizzas[i]->show();
    }
    cout << endl;
}
void menu::showDrinks(){
    cout << left << setw(3) << " nr." << setw(NAME) << " nazwa " << right << setw(PRICE) << " cena " << left << "     " << setw(SIZE) << " rozmiar "  << endl << endl;
    for (unsigned int i = 0; i < drinks.size() ; i++ ) {
        cout << setw(3) << i+1 << " ";
        drinks[i]->show();
    }
    cout << endl;
}
void menu::showMeals(){
    for (unsigned int i = 0; i < meals.size() ; i++ ) {
        meals[i]->show();
    }
    cout << endl;
}
void menu::showMenu(){
    unsigned int clientChoose = 0;
    bool shoudShopping = true;
    unsigned int number=0, howMuch=0;

    while(shoudShopping){

        cout << "1. Lista Pizz" << endl;
        cout << "2. Lista napoi" << endl;
        cout << "3. Lista zestawow" << endl;
        cout << "4. Promocje" << endl;
        cout << "5. Koszyk" << endl;
        cout << "6. Wyjdz" << endl;

        cin >> clientChoose;

        system("cls");

        switch (clientChoose){
        case 1:
            while(clientChoose!=0){
                this->showPizzas();
                cout << "1. Zamow" << endl;
                cout << "0. Powrot do menu" << endl;
                cin >> clientChoose;

                switch(clientChoose){
                case 1:

                    cout << "Podaj numer pizzy, ktora chcesz zamowic: ";
                    cin >> number;
                    cout << "Podaj ilosc: ";
                    cin >> howMuch;
                    cout << "Dodano do koszyka" << endl;
                    shopingCard.addCardPizza(*pizzas[number-1],howMuch,false);
                    if(shopingCard.getPizzas().size() == 2){
                        unsigned int darmowaKolka =1;
                        shopingCard.addCardDrink(*drinks[0],darmowaKolka,true);
                        cout << "Promocja! Za zakup dwoch pizz, dostajesz papsi gratis!" << endl;
                    }
                    system("PAUSE");
                    system("cls");

                    number=0;
                    howMuch=0;
                    break;
                case 0:

                    break;
                }
            }
            break;

        case 2:
            while(clientChoose!=0){
                this->showDrinks();
                cout << "1. Zamow" << endl;
                cout << "0. Powrot do menu" << endl;
                cin >> clientChoose;
                switch(clientChoose){
                case 1:

                    cout << "Podaj numer napoju, ktory chcesz zamowic: ";
                    cin >> number;
                    cout << "Podaj ilosc: ";
                    cin >> howMuch;
                    cout << "Dodano do koszyka" << endl;
                    system("PAUSE");
                    system("cls");

                    shopingCard.addCardDrink(*drinks[number-1],howMuch,false);

                    number=0;
                    howMuch=0;
                    break;
                case 0:

                    break;
                }
            }
            break;

        case 3:
            while(clientChoose!=0){
                this->showMeals();
                cout << "1. Zamow" << endl;
                cout << "0. Powrot do menu" << endl;
                cin >> clientChoose;
                switch(clientChoose){
                case 1:

                    cout << "Podaj numer zestawu, ktory chcesz zamowic: ";
                    cin >> number;
                    cout << "Podaj ilosc: ";
                    cin >> howMuch;
                    cout << "Dodano do koszyka" << endl;
                    system("PAUSE");
                    system("cls");

                    shopingCard.addCardMeal(*meals[number-1],howMuch);

                    number=0;
                    howMuch=0;
                    break;
                case 0:

                    break;
                }
            }
            break;
        case 4:
            readSales();
             system("PAUSE");
             system("cls");
            break;
        case 5:
            shopingCard.showCard();
            cout << "1. Zamawiam" << endl;
            cout << "0. Powrot do menu" << endl;
            cin >> clientChoose;
            system("cls");
                                                     //zmien zamowienie????? dodajemY???
            switch(clientChoose){
            case 1:

                shopingCard.showReceipt();
                break;
            case 0:

                break;
            }
            break;
        case 6:
            shoudShopping = false;
            cout << "--------------------------------------------\n";
            cout << "Dziekujemy za zamowienie!" << endl;
            cout << "--------------------------------------------\n";
            break;
        default:
            cout << "Nieprawidlowy nr, podaj liczbe z przedzialu od 1 do 5." << endl;
            break;
        }

    }
}

