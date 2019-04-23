#include "EnumMicCards.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	EnumMicCards w;
	w.show();
	return a.exec();
}
