//
// Created by TSY on 2022/9/10.
//

#ifndef CP5609_LAB3_WALL_H
#define CP5609_LAB3_WALL_H

enum WalState {
    SOLID
};

#include "BoardObject.h"

class Wall : public BoardObject {

private:
    ObjectColours color1;

public:
    Wall(int start_x, int start_y) : BoardObject(start_x, start_y) {
        color1 = BLACK;
        myClass = A_WALL;
    };

    void touch();

    ~Wall();

};


#endif //CP5609_LAB3_WALL_H
