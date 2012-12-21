#include "qttest1.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qtTest1 w;
	w.show();
	return a.exec();
}
