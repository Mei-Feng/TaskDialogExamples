
// Task DialogExamples.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CTaskDialogExamplesApp:
// �аѾ\��@�����O�� Task DialogExamples.cpp
//

class CTaskDialogExamplesApp : public CWinApp
{
public:
	CTaskDialogExamplesApp();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CTaskDialogExamplesApp theApp;