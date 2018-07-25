#include "pcmtowav.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PcmToWAV w;
	w.show();
	return a.exec();
}
