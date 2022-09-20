//
// Created by TSY on 2022/9/10.
//

#ifndef CP5609_LAB3_CONTROLLER_H
#define CP5609_LAB3_CONTROLLER_H

#include <QWidget>
#include <QTimer>
#include <QPushButton>

#include "Model.h"
#include "BoardCells.h"


#include "Common.h"

class QPushButton;
class QTimer;

class Controller: public QWidget
{
    Q_OBJECT

            QPushButton 	*startButton; 		// Starts
    QPushButton 	*upButton; 		// up button
    QPushButton 	*downButton; 		// down button
    QPushButton 	*leftButton; 		// left button
    QPushButton 	*rightButton; 		// rigght button


    QTimer		*gameTimer;		//

    bool		gameRunning;		//
    bool		setupComplete;		//

    Model	*myModel;
    BoardCells *myBoard;

public:
    Controller(QWidget *parent = 0);
    ~Controller();


private slots:
            void startGame();
    void update();
    void sendUp();
    void sendDown();
    void sendLeft();
    void sendRight();
    void forwardChangeColor(int i, int j, char c);

};


#endif //CP5609_LAB3_CONTROLLER_H
