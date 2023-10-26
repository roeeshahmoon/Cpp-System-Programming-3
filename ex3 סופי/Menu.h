#pragma once
/* Assignment C++: 1
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer,  ID: 316015411
*/
#ifndef EX2CPP_MENU_H
#define EX2CPP_MENU_H
#include <iostream>
using namespace std;


class Menu {// Menu has no fields only public methods
 
public:
    Menu();
    void mainMenu();
    char* Valid_Color(); // check valid of Color chosen by the user only red/green/blue are allowed
    double Valid_side(); // check valid of Side chosen by the user only positive side

    ~Menu(); //D'tor
};


#endif //EX2CPP_MENU_H
