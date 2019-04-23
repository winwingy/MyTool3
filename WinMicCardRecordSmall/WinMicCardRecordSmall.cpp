// WinMicCardRecordSmall.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
#include "mmsystem.h"
#pragma comment(lib, "winmm.lib")

void enumDevs()
{
	UINT devCnt = waveInGetNumDevs();
	FILE* fp = nullptr;
	fopen_s(&fp, "EnumInputMics.txt", "w");
	const int len = 2048;
	char szBuf[len];
	sprintf_s(szBuf, len, "devCnt = %d\n", devCnt);
	fwrite(szBuf, 1, strlen(szBuf), fp);

	for (int i = 0; i < devCnt; ++i)
	{
		WAVEINCAPS pwic = { 0 };
		MMRESULT res = waveInGetDevCaps(i, &pwic, sizeof(pwic));

		sprintf_s(szBuf, len, "i = %d  res = %d \n", i, res);
		fwrite(szBuf, 1, strlen(szBuf), fp);

		if (res == MMSYSERR_NOERROR)
		{
			sprintf_s(szBuf, len, 
				"wMid = %d  wPid = %d vDriverVersion = %d szPname = %s  "
				"dwFormats = %d, wChannels = %d, wReserved1 = %d\n\n",
				pwic.wMid, pwic.wPid, pwic.vDriverVersion,
				pwic.szPname, pwic.dwFormats, pwic.wChannels,
				pwic.wReserved1);
			fwrite(szBuf, 1, strlen(szBuf), fp);
		}
	}
	fclose(fp);
}

int _tmain(int argc, _TCHAR* argv[])
{
	enumDevs();
	printf("运行成功\n");
	system("pause");
	return 0;
}

