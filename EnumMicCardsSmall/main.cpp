#include <QtCore/QCoreApplication>
#include <QAudio>
#include <QAudioDeviceInfo>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

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
	printf("‘À––Ω· ¯");

	return a.exec();
}
