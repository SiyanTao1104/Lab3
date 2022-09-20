//
// Created by TSY on 2022/9/10.
//

#ifndef CP5609_LAB3_COOKIE_H
#define CP5609_LAB3_COOKIE_H

enum CookieState { VISIBLE, EATEN, EXPIRED};

enum PrizeValueIndex {CHEAP, MEDIUM, USEFUL, DEAR};


#include "BoardObject.h"

class Cookie : public BoardObject
{

private:
    CookieState status;
    ObjectColours color1;
    ObjectColours  color2;
    PrizeValueIndex valueIndex;

public:
    Cookie (int start_x, int start_y):BoardObject(start_x,start_y)
    { status=VISIBLE;
        color1 = YELLOW;
        color2  = BLUE;
        valueIndex=CHEAP;
        myClass=A_COOKIE;
    };

    int value();

    void touch ();

    ~Cookie();
};


#endif //CP5609_LAB3_COOKIE_H
