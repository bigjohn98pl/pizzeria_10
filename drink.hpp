#ifndef DRINK_HPP
#define DRINK_HPP

#include "header.hpp"

class drink{

private:
    unsigned int *id;
    unsigned int *amount;
    string* name;
    double* price;
    string* size;

public:

    drink();
    drink(drink &copy, unsigned int &_amount);
    drink(unsigned int &_id,string& _name,double& _price, string& _size);
    void show();
    void show_2();
    double getPrice();
    unsigned int getId();
    unsigned int getAmount();
    void set(string& _name,double& _price, string& _size);
    void setAmount(unsigned int &_amount);
    ~drink();
};

#endif // DRINK_HPP
