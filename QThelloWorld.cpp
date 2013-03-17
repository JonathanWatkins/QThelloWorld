/*#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QPushButton hello("Hello world!");
	hello.resize(100, 30);

	hello.show();
	return app.exec();
}*/


#include <QtGui/QApplication>
#include "mdmainwin.h"

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    mdmainwin window;
    window.show();

    int result = application.exec();
    return result;
}

