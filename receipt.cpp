#include "receipt.hpp"

receipt::receipt()
{

}

void receipt::showReceipt(){
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
