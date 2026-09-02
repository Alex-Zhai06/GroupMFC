#pragma once
#include "afxdialogex.h"


// CRSEULT 对话框

class CRSEULT : public CDialogEx
{
	DECLARE_DYNAMIC(CRSEULT)

public:
	CRSEULT(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CRSEULT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RESULT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();

//控制结果页的静态文字："你的射门方向：XXX"
public:
	void SetShootDirection(const CString& direction);

protected:
	virtual BOOL OnInitDialog();

private:
	CString m_direction; // 用于存储在上一页面选择的射门方向
	CString m_save; //守门员扑救方向

//public:
	//CStatic m_pictureResult;

//根据射门结果动态选择一张图片展示
private:
	CStatic m_pictureResult;

	CBitmap m_bmpGOAL;
	CBitmap m_bmpSAVE;
	CBitmap m_bmpWIDE;
	void ShowResultImage(const CString& result);
};
