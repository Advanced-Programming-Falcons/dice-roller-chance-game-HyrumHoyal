#include <iostream>
#include <string>
#include <ctime>

#include "dice.h"

using namespace std;

Dice::Dice(int side){
    sides = side;
}

int Dice::roll_dice() {
    num = rand()% sides + 1;
    return num;   
}


