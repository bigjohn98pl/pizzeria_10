#include "drink.hpp"

drink::drink()
{
    id = new unsigned int;
    amount = new unsigned int;
    name = new string;
    price= new double;
    size = new string;
    isFree = new bool;
}
drink::drink(drink &copy, unsigned int &_amount)
{
    id = new unsigned int;
    amount = new unsigned int;
    name = new string;
    price= new double;
    size = new string;
    isFree = new bool;

    *id = *copy.id;
    *amount = _amount;
    *name = *copy.name;
    *price= *copy.price;
    *size = *copy.size;
    *isFree = *copy.isFree;
}
drink::drink(unsigned int &_id,string& _name, double& _price, string& _size)
{
    id = new unsigned int;
    amount = new unsigned int;
    name = new string;
    price= new double;
    size = new string;
    isFree = new bool;

    *id = _id;
    *amount = 1;
    *name = _name;
    *price= _price;
    *size = _size;
    *isFree = false;
}
drink::~drink(){
    delete id;
    delete amount;
    delete name;
    delete price;
    delete size;
    delete isFree;

    id = nullptr;
    amount = nullptr;
    name = nullptr;
    price = nullptr;
    size = nullptr;
    isFree = nullptr;
}
double drink::getPrice(){
    return *price;
}
unsigned int drink::getId(){
    return *id;
}
unsigned int drink::getAmount(){
    return *amount;
}
void drink::set(string& _name,double& _price, string& _size){
    *name = _name;
    *price = _price;
    *size = _size;
}
void drink::setAmount(unsigned int &_amount){
    *amount = _amount;
}
void drink::show(){
    cout << left << setw(NAME) << *name << right << setw(PRICE) << fixed << setprecision(2) << *price << left << " zl  " << right << setw(SIZE) << *size  << left << " l" << endl;
}
void drink::show_2(){
    if(!(*isFree)){
        cout << left << setw(NAME) << *name << right << setw(PRICE) << fixed << setprecision(2) << *price << left << " zl  ";
        cout << "x" << *amount << " = " << *price * static_cast<double>(*amount) << " zl"<< endl;
    }
    else{
        cout << left << setw(NAME) << *name << right << setw(PRICE) << fixed << setprecision(2) << "Darmowa!" << endl;
    }
}
