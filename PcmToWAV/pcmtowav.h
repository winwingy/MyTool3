#ifndef PCMTOWAV_H
#define PCMTOWAV_H

#include <QtWidgets/QMainWindow>
#include "ui_pcmtowav.h"

class PcmToWAV : public QMainWindow
{
	Q_OBJECT

public:
	PcmToWAV(QWidget *parent = 0);
	~PcmToWAV();

private:
	Ui::PcmToWAVClass ui;
};

#endif // PCMTOWAV_H
