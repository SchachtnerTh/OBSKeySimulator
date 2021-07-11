
// OBSKeySimulator.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'pch.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// COBSKeySimulatorApp:
// Siehe OBSKeySimulator.cpp für die Implementierung dieser Klasse
//

class COBSKeySimulatorApp : public CWinApp
{
public:
	COBSKeySimulatorApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern COBSKeySimulatorApp theApp;
