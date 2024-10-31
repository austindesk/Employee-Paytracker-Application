#include "loginwindow.h"

#include <QApplication>

//main program class
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //all windows are instantiated the same way within the loginwindow class, dialog classes etc.
    loginWindow w;
    w.SetWUID();
    w.show();
    return a.exec();
}
