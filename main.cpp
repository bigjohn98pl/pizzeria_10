#include "header.hpp"

class pizza{
public:
    void set(string nam, double pri, string ing){
        name = nam; price = pri;    ingredients = ing;
    }
    void print(){
        cout << "nazwa: " << name << endl
             << "cena: " << price << endl
             << "skladniki: " << ingredients << endl;
    }
private:
    string name;
    double price;
    string ingredients;
    int size;
};

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
    }
    p.print();
    fin.close();

}

int main()
{
    cout << "Witamy w naszej Pizzeri!" << endl;
    readPizzas();
    return 0;
}
