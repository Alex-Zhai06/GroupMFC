#pragma once
#include "afxdialogex.h"
#include "CRSEULT.h"

// CSHOOTDialog 对话框

class CSHOOTDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CSHOOTDialog)

public:
	CSHOOTDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSHOOTDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GROUPWORKZHAICHENG_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClicked1002();

private:
	CRSEULT cw4; //生成结果对话框
public:
	afx_msg void OnBnClicked1000();
	afx_msg void OnBnClicked1001();

//控制射门页的静态文字："当前选择：XXX"
public:
	void SetCountry(const CString& country);

protected:
	virtual BOOL OnInitDialog();

private:
	CString m_country; // 用于存储在上一页面选择的国家
};
