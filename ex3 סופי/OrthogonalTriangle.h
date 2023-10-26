#pragma once
/* Assignment C++: 3
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer,  ID: 316015411
*/

#ifndef EXCPP3_ORTHOGONALTRIANGLE_H
#define EXCPP3_ORTHOGONALTRIANGLE_H

#include "Shape.h"

class OrthogonalTriangle : public Shape { //OrthogonalTriangle inherits from Shape
    double side_triangle;
    double area, perimeter;
public:
    OrthogonalTriangle(char* Color = nullptr, double side_triangle = 0);  //C'tor with defult values
    virtual double getArea() const override;// Overridden Method Of Shape
    virtual double getPerimeter() const override;// Overridden Method Of Shape
    void draw() const;  //draw OrthogonalTriangle by '*'
    virtual void print() const override; // Overridden method Of shape ; print OrthogonalTriangle details
    friend std::ostream& operator<<(std::ostream& out, const OrthogonalTriangle& triangle); //Print OrthogonalTriangle using << operator
    virtual ~OrthogonalTriangle(); // Dtor

};


#endif //EXCPP3_ORTHOGONALTRIANGLE_H
