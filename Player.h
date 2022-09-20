//
// Created by TSY on 2022/9/10.
//

#ifndef CP5609_LAB3_PLAYER_H
#define CP5609_LAB3_PLAYER_H

#include <iostream>

enum PlayerState { ALIVE, DEAD};

#include "BoardObject.h"

class Player : public BoardObject
{

private:
    PlayerState status;
    ObjectColours color1;
    ObjectColours  color2;

public:
    Player (int start_x, int start_y):BoardObject(start_x,start_y)
    { status=ALIVE;
        color1 = RED;
        color2  = BLUE;
        myClass=A_PLAYER;
    };

    virtual void touch ();


~Player();
};

#endif //CP5609_LAB3_PLAYER_H
