
// personal_zhaichengDlg.h: 头文件
//

#pragma once
#include "CSL.h"



// CpersonalzhaichengDlg 对话框
class CpersonalzhaichengDlg : public CDialogEx
{
// 构造
public:
	CpersonalzhaichengDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PERSONAL_ZHAICHENG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CSL cw2; //生成选择球队国家的页面
	
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
