
// groupwork-zhaichengDlg.h: 头文件
//

#pragma once
#include "afxdialogex.h"

// CgroupworkzhaichengDlg 对话框
class CgroupworkzhaichengDlg : public CDialogEx
{
// 构造
	DECLARE_DYNAMIC(CSL)
public:
	CgroupworkzhaichengDlg(CWnd* pParent = nullptr);	// 标准构造函数
	
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GROUPWORKZHAICHENG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	DECLARE_MESSAGE_MAP()
/*
// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()*/
};
