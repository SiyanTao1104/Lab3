//
// Created by TSY on 2022/9/10.
//


#include "Wall.h"
#include "BoardObject.h"


void Wall :: touch ()
{
    color(color1);

}

Wall::~Wall() {
    delete &color1 ;
    delete &myClass;
}
