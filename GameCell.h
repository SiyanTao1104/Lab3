//
// Created by TSY on 2022/9/10.
//

#ifndef CP5609_LAB3_GAMECELL_H
#define CP5609_LAB3_GAMECELL_H

#include <QWidget>

class GameCell : public QWidget
{
    Q_OBJECT
private:
    QColor currentColor;

public:
    GameCell(QWidget *parent = 0);

    //QColor currentColor() const { return currentColor; }

public slots:
            void setColor(QColor aColor);

protected:
    void paintEvent(QPaintEvent *event);

};

#endif //CP5609_LAB3_GAMECELL_H
