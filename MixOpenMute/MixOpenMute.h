
// MixOpenMute.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMixOpenMuteApp: 
// �йش����ʵ�֣������ MixOpenMute.cpp
//

class CMixOpenMuteApp : public CWinApp
{
public:
	CMixOpenMuteApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMixOpenMuteApp theApp;