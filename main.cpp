#include "myqt5app.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyQt5App w;
    w.show();

    return a.exec();
}
