#pragma once
/* Assignment C++: 3
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer,  ID: 316015411
*/

#ifndef EXCPP3_SQUARE_H
#define EXCPP3_SQUARE_H

#include "Shape.h"

class Square : public Shape { //Square inherits from Shape
    double side_square;
    double area, perimeter;
public:
    Square(char* Color = nullptr, double Side_Square = 0);  //C'tor with defult values
    virtual double getArea() const override;// Overridden Method Of Shape
    virtual double getPerimeter() const override;// Overridden Method Of Shape
    void draw() const; //draw Square by '*'
    virtual void print() const override;  // Overridden method Of shape ; print Square details
    friend std::ostream& operator<<(std::ostream& out, const Square& square);

    virtual ~Square(); // Dtor
};


#endif //EXCPP3_SQUARE_H
