/* Assignment C++: 1
//   Author: Roee Shahmoon, ID: 206564759
//   Author: Noam Klainer,  ID: 316015411
*/

#include "Menu.h"
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "OrthogonalTriangle.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;


Menu::Menu() {} // Constructor of menu

void Menu::mainMenu() {
    LinkedList<Shape*> List_Shapes;  //define a new linked list of pointer to shapes
    static int choose;
    static int shape_option;
    char* ShapeColor = new char;
    double side_length;
    do {
        cout << "=======================================" << endl;
        cout << "<1> Add element to the list" << endl;
        cout << "<2> Remove the last shape from list" << endl;
        cout << "<3> Print the last shape" << endl;
        cout << "<4> Exit" << endl;
        cout << "=======================================" << endl;
        try {
            cin >> choose;
            if (choose == 1) { //User choose option 1 ; now he will choose Shape
                cout << "Choose 1 for Square, 2 for Circle, 3 for Triangle: ";
                cin >> shape_option;
                if (shape_option == 1) { //The user choose add Square to the list
                    while (true) {
                        try { //The user choose details of Square
                            cout << "Enter square's color: ";
                            ShapeColor = Valid_Color();
                            cout << "Enter square's side length: ";
                            side_length = Valid_side();
                            break;
                        }
                        catch (const char* error) { // catch exception and print error message , then repeat while loop
                            cout << error << endl;
                        }
                    }
                    Square* squ = new Square(ShapeColor,
                        side_length); //allocates memory for the Square and returns a pointer to the memory location of the new Square
                    List_Shapes.insert(squ);

                }
                if (shape_option == 2) { //The user choose add Circle to the list
                    while (true) {
                        try { //The user choose details of Circle
                            cout << "Enter circle's color: ";
                            ShapeColor = Valid_Color();
                            cout << "Enter circle's radius: ";
                            side_length = Valid_side();
                            break;
                        }
                        catch (const char* error) { // catch exception and print error message , then repeat while loop
                            cout << error << endl;
                        }
                    }
                    Circle* circ = new Circle(ShapeColor, side_length);  //allocates memory for the Circle and returns a pointer to the memory location of the new Circle
                    List_Shapes.insert(circ);
                    
                }
                if (shape_option == 3) { //The user choose add Triangle to the list
                    while (true) {
                        try {  //The user choose details of Triangle
                            cout << "Enter Triangle's color: ";
                            ShapeColor = Valid_Color();
                            cout << "Enter Triangle's side: ";
                            side_length = Valid_side();
                            break;
                        }
                        catch (const char* error) { // catch exception and print error message , then repeat while loop
                            cout << error << endl;
                        }
                    }
                    OrthogonalTriangle* tri = new OrthogonalTriangle(ShapeColor, side_length);  //allocates memory for the OrthogonalTriangle and returns a pointer to the memory location of the new OrthogonalTriangle
                    List_Shapes.insert(tri);
                }
            }
            if (choose == 2) {  //Remove the last shape from the list
                try {
                   Shape* temp = List_Shapes.deleteNode();
                   delete temp;
                }
                catch (exception& e) {
                    cout << e.what() << endl;
                }
            }
            if (choose == 3) {    //Print the last shape from the list
                
                Shape* p_shape = List_Shapes.getTop();
                Square* temp_s = dynamic_cast<Square*>(p_shape); //dynamic cast to temp pointer for print Square, if not Square return null
                if (temp_s) {//if temp is not null
                    cout << *temp_s;
                }
                OrthogonalTriangle* temp_o = dynamic_cast<OrthogonalTriangle*>(p_shape); //dynamic cast to temp pointer for print Triangle, if not Triangle return null
                if (temp_o) { //if temp is not null
                    cout << *temp_o;
                }
                Circle* temp_c = dynamic_cast<Circle*>(p_shape);  //dynamic cast to temp pointer for print Circle, if not Circle return null
                if (temp_c) { //if temp is not null
                    cout << *temp_c;
                }

            }
            if (choose == 4) { //exit from exe del allocted memory
                cout << "Goodbye!" << endl;
                //delete[] ShapeColor;
               
                while (!List_Shapes.IsEmpty()) {
                    Shape* temp = List_Shapes.deleteNode();
                    delete temp;

                }
                
                }
               
            if (choose != 1 && choose != 2 && choose != 3 && choose != 4) {//the user insert Invalid selection
                throw "Invalid selection.";
            }
        }
        catch (const char* error) { // catch exception, print Invalid selection. then repeat do while loop
            cout << error << endl;
        }
        catch (exception& e) {
            cout << e.what() << endl;
        }
    } while (choose != 4);
}

char* Menu::Valid_Color() {  // check Valid of Color chosen by the user only red/green/blue are allowed
    char* Color_User = new char[6];
    cin >> Color_User;
    if (strcmp(Color_User, "green") == 0 || strcmp(Color_User, "blue") == 0 || strcmp(Color_User, "red") == 0) {
        return Color_User;
    }
    else {
        delete[] Color_User;
        throw "Exception: color must be red green or blue\nplease try again"; // Exception if not red/green/blue
    }
}

double Menu::Valid_side() {  // check valid of Side chosen by the user only positive side
    double side_length;
    cin >> side_length;
    if (side_length > 0) {
        return side_length;
    }
    else {
        throw "Exception: The side must be positive\nplease try again"; // exception If not red/green/blue
    }
}


Menu::~Menu() {     //destructor
    //cout<<"Deleting a Menu Type...\n";
}


