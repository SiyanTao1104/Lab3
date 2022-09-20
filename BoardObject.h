//
// Created by TSY on 2022/9/10.
//

#ifndef CP5609_LAB3_BOARDOBJECT_H
#define CP5609_LAB3_BOARDOBJECT_H

enum ObjectColours { BLACK, YELLOW, BLUE, RED, INVISIBLE, BACKGROUND};
enum ObjectTypes { THE_BACKGROUND, A_COOKIE, A_PLAYER ,A_WALL};


class BoardObject
{

private:
    int x,y;
    ObjectColours currentColor;
protected:
    ObjectTypes myClass;
    //int unique_ID;
    //static int count;
public:
    BoardObject (int start_x, int start_y)
    { x=start_x; y=start_y;
        currentColor=BACKGROUND;
        myClass=THE_BACKGROUND;

        //unique_ID=count++;
    };

    ~BoardObject(){

    }


    //int get_ID() { return unique_ID;};

    int xValue() { return x;};
    int yValue() { return y;};

    ObjectTypes Type() const {return myClass;}

    ObjectColours Color() const {return currentColor; }

    virtual void touch() {currentColor=BACKGROUND; }


protected:

    void color(ObjectColours new_color)
    {currentColor=new_color;};

    void xValue(int new_x) {x=new_x;};
    void yValue(int new_y) {y=new_y;};


};

//int BoardObject::count=0;

#endif //CP5609_LAB3_BOARDOBJECT_H
