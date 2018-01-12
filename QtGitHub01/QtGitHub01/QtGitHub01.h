#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGitHub01.h"
#include <QPushButton>
#include <QSound>

class QtGitHub01 : public QMainWindow
{
	Q_OBJECT

public:
	QtGitHub01(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGitHub01Class ui;

private slots:
	void btn1SlotFkt();
	void btn2SlotFkt();

public:
	QPushButton *btn1;
	QPushButton *btn2;

};
