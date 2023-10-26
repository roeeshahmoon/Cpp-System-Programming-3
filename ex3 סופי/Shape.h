#pragma once
/* Assignment C++: 3
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer,  ID: 316015411
*/
#ifndef EXCPP3_SHAPE_H
#define EXCPP3_SHAPE_H

#include <iostream>
#include <string.h>
using namespace std;

class Shape { //Abstract Class
    char* color = new char;  //Dynamically Allocated

public:
    Shape(char* Color = nullptr); //Shape C'tor
    virtual double getArea() const = 0; // pure virtual method
    virtual double getPerimeter() const = 0; // pure virtual method
    virtual void print() const = 0; // pure virtual method
    virtual char* getColor() const; //return color method
    virtual ~Shape(); //virtual D'tor of Shape
};


#endif //EXCPP3_SHAPE_H
