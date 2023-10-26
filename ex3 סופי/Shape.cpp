/* Assignment C++: 3
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer,  ID: 316015411
*/
#define _CRT_SECURE_NO_WARMIMGS 
#include "Shape.h"


Shape::Shape(char* Color) {//Shape constructor
    color = Color; //available color are green,red,blue
}

char* Shape::getColor() const { return color; }

 Shape::~Shape() {    //destructor
     delete color;// Freeing The Memory Allocated For color
}



