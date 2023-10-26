#pragma once
/* Assignment C++: 3
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer,  ID: 316015411
*/
#ifndef EXCPP3_CIRCLE_H
#define EXCPP3_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
    double radius;
    double area, perimeter;
public:
    Circle(char* Color, double side_length = 0);  //C'tor with defult values
    virtual double getArea() const override;// Overridden method Of shape
    virtual double getPerimeter() const override;// Overridden method Of shape
    virtual void print() const override; // Overridden method Of shape
    friend std::ostream& operator<<(std::ostream& out, const Circle& circle);

    virtual ~Circle(); // Dtor
};


#endif //EXCPP3_CIRCLE_H
