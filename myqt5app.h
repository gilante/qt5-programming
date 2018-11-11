#ifndef MYQT5APP_H
#define MYQT5APP_H

#include <QWidget>

namespace Ui {
class MyQt5App;
}

class MyQt5App : public QWidget
{
    Q_OBJECT

public:
    explicit MyQt5App(QWidget *parent = 0);
    ~MyQt5App();

private:
    Ui::MyQt5App *ui;
};

#endif // MYQT5APP_H
