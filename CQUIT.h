#pragma once
#include "afxdialogex.h"


// CQUIT 对话框

class CQUIT : public CDialogEx
{
	DECLARE_DYNAMIC(CQUIT)

public:
	CQUIT(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CQUIT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CQUIT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
