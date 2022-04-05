#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "header.hpp"

class pizza{
public:
    pizza();
    pizza(string& _name, double& _price, string& _ingredients);
    ~pizza();
    void set(string _name, double _price, string _ingredients);
    double getPrice();
    void show();
private:
    string *name;
    double *price;
    string *ingredients;
    //int *size;
};


#endif // PIZZA_HPP
