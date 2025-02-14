#ifndef dice_HPP
#define dice_HPP
#include<string>
using namespace std;

class Dice { 
    public:

        //constructor
        Dice(int side);

        int roll_dice();
    private:
        int sides;
        int num;

};

#endif