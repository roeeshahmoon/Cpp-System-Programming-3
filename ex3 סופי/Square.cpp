/* Assignment C++: 3
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer,  ID: 316015411
*/

#include "Square.h"

Square::Square(char* Color, double Side_Square) : Shape(Color) { //Square c'tor
    side_square = Side_Square;
    area = side_square * side_square; // calc of area square
    perimeter = side_square * 4; // calc of perimeter of square
}

double Square::getArea() const { return area; }  //return the Area
double Square::getPerimeter() const { return perimeter; } //return the perimeter

void Square::draw() const { //draw Square by '*'
    for (int i = 0; i < side_square; i++) {
        for (int j = 0; j < side_square; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void Square::print() const { //print Square details
    cout << "Square details: color=" << this->getColor() << ", side length=" << this->side_square << endl;
    cout << "area=" << this->getArea() << ", perimeter=" << this->getPerimeter() << endl;
}

std::ostream& operator<<(std::ostream& out, const Square& square) {//Print Square using << operator
    square.print();
    square.draw();
    return out;
}

Square::~Square() {} //destructor
