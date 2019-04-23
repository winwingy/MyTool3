#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_EnumMicCards.h"

class EnumMicCards : public QMainWindow
{
	Q_OBJECT

public:
	EnumMicCards(QWidget *parent = Q_NULLPTR);

private:
	Ui::EnumMicCardsClass ui;
};
