#pragma once
#include "afxdialogex.h"
#include "CSHOOTDialog.h"

// CSL 对话框

class CSL : public CDialogEx
{
	DECLARE_DYNAMIC(CSL)

public:
	CSL(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSL();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

private:
	CString stulist;
	CSHOOTDialog cw3;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
