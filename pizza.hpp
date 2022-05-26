#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "header.hpp"

class pizza{

private:
    unsigned int *id;
    unsigned int *amount;
    string *name;
    double *price;
    string *ingredients;
    //int *size;

public:

    pizza();
    pizza(pizza &copy,unsigned int &_amount);
    pizza(unsigned int &_id,string& _name, double& _price, string& _ingredients);
    ~pizza();
    void set(string _name, double _price, string _ingredients);
    void setAmount(unsigned int &_amount);
    double getPrice();
    unsigned int getId();
    unsigned int getAmount();
    void show();
    void show_2();
};


#endif // PIZZA_HPP
