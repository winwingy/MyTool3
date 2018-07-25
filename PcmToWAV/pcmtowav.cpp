#include "pcmtowav.h"
#include <windows.h>
#include <QtMultimedia/QAudio>
#include <QtMultimedia/QAudioInput>
#include <QAudioFormat>
#include <QAudioOutput>

void saveWave(const QString &fileName, const QByteArray &raw, 
	const QAudioFormat &format)
{
	typedef struct{
		char riff_fileid[4];//"RIFF"
		DWORD riff_fileLen;
		char waveid[4];//"WAVE"

		char fmt_chkid[4];//"fmt"
		DWORD fmt_chkLen;

		WORD    wFormatTag;        /* format type */
		WORD    nChannels;         /* number of channels (i.e. mono, stereo, etc.) */
		DWORD   nSamplesPerSec;    /* sample rate */
		DWORD   nAvgBytesPerSec;   /* for buffer estimation */
		WORD    nBlockAlign;       /* block size of data */
		WORD    wBitsPerSample;


		char data_chkid[4];//"DATA"
		WORD data_chkLen;
	}WaveHeader;

	WaveHeader wh = { 0 };
	strcpy(wh.riff_fileid, "RIFF");
	wh.riff_fileLen = raw.length() + 32;
	strcpy(wh.waveid, "WAVE");

	strcpy(wh.fmt_chkid, "fmt ");
	wh.fmt_chkLen = 16;

	wh.wFormatTag = WAVE_FORMAT_PCM;
	wh.nChannels = format.channelCount();
	wh.nSamplesPerSec = format.frequency();
	wh.wBitsPerSample = format.sampleSize();
	wh.nBlockAlign = wh.nChannels*wh.wBitsPerSample / 8;
	wh.nAvgBytesPerSec = wh.nBlockAlign*wh.nSamplesPerSec;

	strcpy(wh.data_chkid, "data");
	wh.data_chkLen = raw.length();

	QFile f(fileName);
	f.open(QFile::WriteOnly);
	f.write((char *)&wh, sizeof(wh));
	f.write(raw);
	f.close();
}

PcmToWAV::PcmToWAV(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

PcmToWAV::~PcmToWAV()
{

}
