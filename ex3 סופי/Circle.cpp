/* Assignment C++: 3
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer,  ID: 316015411
*/
#define _USE_MATH_DEFINES
#include "Circle.h"
#include <cmath>

Circle::Circle(char* Color, double Radius) : Shape(Color) { //Square c'tor
    radius = Radius;
    area = M_PI * radius * radius;
    perimeter = 2 * M_PI * radius;
}

double Circle::getArea() const { return area; } //return the Area
double Circle::getPerimeter() const { return perimeter; }  //return the Perimeter


void Circle::print() const {
    cout << "Circle details: color=" << getColor() << ", radius=" << radius << endl;
    cout << "area=" << getArea() << ", perimeter=" << getPerimeter() << endl;
}

std::ostream& operator<<(std::ostream& out, const Circle& circle) {//Print Set values using << operator
    circle.print();
    return out;
}

Circle::~Circle() {} //destructor
