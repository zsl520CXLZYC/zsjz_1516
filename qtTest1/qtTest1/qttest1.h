#ifndef QTTEST1_H
#define QTTEST1_H

#include <QtGui/QMainWindow>
#include "ui_qttest1.h"

class qtTest1 : public QMainWindow
{
	Q_OBJECT

public:
	qtTest1(QWidget *parent = 0, Qt::WFlags flags = 0);
	~qtTest1();

private:
	Ui::qtTest1Class ui;
};

#endif // QTTEST1_H
