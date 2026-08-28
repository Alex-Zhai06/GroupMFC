#pragma once
#include "afxdialogex.h"


// CWINwrong 对话框

class CWINwrong : public CDialogEx
{
	DECLARE_DYNAMIC(CWINwrong)

public:
	CWINwrong(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CWINwrong();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
