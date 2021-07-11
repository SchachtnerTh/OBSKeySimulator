
// OBSKeySimulatorDlg.h: Headerdatei
//

#pragma once


// COBSKeySimulatorDlg-Dialogfeld
class COBSKeySimulatorDlg : public CDialogEx
{
// Konstruktion
public:
	COBSKeySimulatorDlg(CWnd* pParent = nullptr);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OBSKEYSIMULATOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	HWND hwndObsWindow;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedLshift();
	afx_msg void OnFnBnClicked(UINT nID);
	BOOL cbLShift;
};
