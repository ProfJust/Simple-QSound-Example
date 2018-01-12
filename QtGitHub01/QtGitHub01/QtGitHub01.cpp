#include "QtGitHub01.h"

QtGitHub01::QtGitHub01(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("QSound-Example by Prof. Just - Westfaelische Hochschule - Campus Bocholt - Fachbereich Maschinenbau");
	btn1 = new QPushButton(this);
	btn2 = new QPushButton(this);
	// Button konfigurieren
	btn1->setGeometry((QRect(QPoint(10, 10), QSize(100, 50))));  //x,y,w,h
	btn2->setGeometry((QRect(QPoint(110, 10), QSize(100, 50))));  //x,y,w,h

 //btn1->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
	btn1->setText(" Glocke ");
	btn2->setText(" Boom !");
	// Signale verbinden
	connect(btn1, SIGNAL(clicked()), this, SLOT(btn1SlotFkt()));
	connect(btn2, SIGNAL(clicked()), this, SLOT(btn2SlotFkt()));
}
void QtGitHub01::btn1SlotFkt() {
	QSound::play("Bell.wav");

}
void QtGitHub01::btn2SlotFkt() {
	QSound::play("explosion.wav");
}