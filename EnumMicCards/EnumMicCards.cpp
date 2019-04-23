#include "EnumMicCards.h"
#include <QAudio>
#include <QAudioDeviceInfo>




EnumMicCards::EnumMicCards(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QList<QAudioDeviceInfo> infoList =
		QAudioDeviceInfo::availableDevices(QAudio::AudioInput);

	FILE* fp = nullptr;
	fopen_s(&fp, "MicCards.txt", "w");

	for (auto& per : infoList)
	{
		fwrite(per.deviceName().toLocal8Bit().constData(), 
			per.deviceName().toLocal8Bit().count(), 1, fp);
		fwrite("\r\n", 1, 2, fp);
	}
	fclose(fp);


}
