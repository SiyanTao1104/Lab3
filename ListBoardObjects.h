//
// Created by TSY on 2022/9/10.
//

#ifndef CP5609_LAB3_LISTBOARDOBJECTS_H
#define CP5609_LAB3_LISTBOARDOBJECTS_H

#include <vector>
#include  "BoardObject.h"
#include  "Player.h"
#include  "Cookie.h"

typedef BoardObject* p_BoardObject;


class  ListBoardObjects
{
protected:
    std::vector <p_BoardObject> list;
    std::vector < p_BoardObject>::iterator internalIterator;
public:
    ListBoardObjects(p_BoardObject theFirst);

    p_BoardObject theFirst();
    p_BoardObject theNext();
    void addOne(p_BoardObject const newOne);
    void removeOnePlayer();
    bool isThereAWall();
    int isCookieValue();

};

#endif //CP5609_LAB3_LISTBOARDOBJECTS_H
