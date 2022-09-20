//
// Created by TSY on 2022/9/10.
//

#include "BoardObject.h"
#include "Cookie.h"

int PrizeValues[]={10,20,30,40};

void Cookie :: touch ()
{ switch (status)
    { case VISIBLE : if (color1==Color() )
                color(color2);
            else
                color(color1);
            break;
        case  EATEN :
        case  EXPIRED :
            color(BACKGROUND);
    }
}



int Cookie :: value ()
{return PrizeValues[valueIndex]; }

Cookie::~Cookie() {
    delete &valueIndex;
    delete &color1;
    delete &color2;
    delete &status;
    delete &myClass;
}


