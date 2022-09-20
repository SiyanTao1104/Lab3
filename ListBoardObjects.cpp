//
// Created by TSY on 2022/9/10.
//

#include <iostream>
#include "BoardObject.h"
#include "ListBoardObjects.h"

ListBoardObjects:: ListBoardObjects(p_BoardObject newOne):list()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    list.insert(it,newOne);
}

p_BoardObject ListBoardObjects:: theFirst()
{
    if (0 < list.size()  )
    { internalIterator=list.begin();
        return (*internalIterator);
    }
    else
        return NULL;
}

void ListBoardObjects:: addOne(p_BoardObject newOne)
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    list.insert(it,newOne);
}

p_BoardObject ListBoardObjects :: theNext()
{
    internalIterator++;
    if (internalIterator < list.end())
    {
        return (*internalIterator);
    }
    else
        return NULL;
}

void ListBoardObjects :: removeOnePlayer()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_PLAYER==(*it)->Type())
        { list.erase(it); return;}
        it++;
    }

    return ;
}


bool ListBoardObjects :: isThereAWall()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_WALL==(*it)->Type())
        {  return true;}
        it++;
    }

    return false ;
}


int ListBoardObjects :: isCookieValue()
{   int temp=0;
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_COOKIE==(*it)->Type())
        { temp= ((Cookie *)(*it))->value();
            list.erase(it);
            return temp;
        }
        it++;
    }

    return temp ;
}
