// AndroidScreenMonitorDlg.h : header file
//

#pragma once

#include "AndroidSocket.h"

// CAndroidScreenMonitorDlg dialog
class CAndroidScreenMonitorDlg : public CDialog
{
// Construction
public:
	CAndroidScreenMonitorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ANDROIDSCREENMONITOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
private:
	void				ShowADBC();
	void				ShowSelectDevice();
	void				Transport();

	virtual BOOL DestroyWindow();

protected:
	HICON m_hIcon;

	CAndroidSocket*		m_pAndroidSocket;
	CString				m_aSerialNumber;
	BOOL				m_Rotation;
	int					m_LastWidth;
	int					m_LastHeight;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);

	LRESULT OnShowADBC(WPARAM wParam, LPARAM lParam);
	LRESULT OnShowSelectDevice(WPARAM wParam, LPARAM lParam);
	LRESULT OnTransport(WPARAM wParam, LPARAM lParam);
	LRESULT	OnAndroidSocket(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
};
