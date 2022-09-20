//
// Created by TSY on 2022/9/10.
//

#ifndef CP5609_LAB3_BOARDCELLS_H
#define CP5609_LAB3_BOARDCELLS_H

#include "GameCell.h"
#include "Common.h"
#include <QGridLayout>

class BoardCells : public QGridLayout
{
 private:
	GameCell *theCells[SIZE_X][SIZE_Y];

 public:
     BoardCells();

     void forwardChangeColor(int i, int j, char c);

};

#endif //CP5609_LAB3_BOARDCELLS_H
