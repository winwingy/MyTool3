#include "textfilelisttoonefile.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TextFileListToOneFile w;
	w.show();
	return a.exec();
}
