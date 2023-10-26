/* Assignment C++: 3
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer,  ID: 316015411
*/


#include "OrthogonalTriangle.h"
#include "cmath"

OrthogonalTriangle::OrthogonalTriangle(char* Color, double Side_Triangle) : Shape(Color) { //Triangle c'tor
    side_triangle = Side_Triangle;
    area = ((side_triangle * side_triangle) / 2);
    perimeter = sqrt(2) * side_triangle;
}
double OrthogonalTriangle::getArea() const { return area; }  //return the Area
double OrthogonalTriangle::getPerimeter() const { return perimeter; } //return the Perimeter

void OrthogonalTriangle::draw() const { //draw OrthogonalTriangle by '*'
    for (int i = 0; i < side_triangle; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void OrthogonalTriangle::print() const { //print OrthogonalTriangle details
    cout << "OrthogonalTriangle details: color=" << getColor() << ", side=" << side_triangle << endl;
    cout << "area=" << getArea() << ", perimeter=" << getPerimeter() << endl;
}

std::ostream& operator<<(std::ostream& out, const OrthogonalTriangle& triangle) {//Print OrthogonalTriangle using << operator
    triangle.print();
    triangle.draw();
    return out;
}




OrthogonalTriangle::~OrthogonalTriangle() {} //destructor

