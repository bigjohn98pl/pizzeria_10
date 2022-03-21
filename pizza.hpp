#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "header.hpp"

class pizza{
public:
    pizza();
    pizza(string& nam, double& pri, string& ing);
    ~pizza();
    void show();
private:
    string *name;
    double *price;
    string *ingredients;
    int *size;
};

#endif // PIZZA_HPP
