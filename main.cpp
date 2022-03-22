#include "header.hpp"
#include "pizza.hpp"

class drink{
    string name;
    double price;
    int size;
};

void readPizzas(){

    string name,ingredients;
    double price;
    pizza p;
    fstream  fin;
    fin.open("pizzas.txt");

    while (fin >> name >> price >> ingredients) {
       p.set(name,price,ingredients);
       p.show();
    }
    fin.close();

}

int main()
{
    cout << "Witamy w naszej Pizzeri!" << endl;
    readPizzas();
    return 0;
}
