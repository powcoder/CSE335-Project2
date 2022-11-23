https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/**
 * \file TreeDemo.h
 * Header file for the TreeDemo application class
 * \cond
 */
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

/**
 *TreeDemo application class
 */
class CTreeDemoApp : public CWinApp
{
public:
	CTreeDemoApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()

private:
    Gdiplus::GdiplusStartupInput gdiplusStartupInput;
    ULONG_PTR gdiplusToken;
};

extern CTreeDemoApp theApp;

/** \endcond */