#include "widget.h"
#include <QApplication>

#include "func.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget* window = new Widget();
    window->show();

    return a.exec();
}
