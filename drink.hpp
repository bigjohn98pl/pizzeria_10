#ifndef DRINK_HPP
#define DRINK_HPP

#include "header.hpp"

class drink
{
private:
    string* name;
    double* price;
    string* size;
public:
    drink();
    drink(string& _name,double& _price, string& _size);
    void show();
    ~drink();

    friend void readDrinks();
};

#endif // DRINK_HPP
