// CRSEULT.cpp: 实现文件
//

#include "pch.h"
#include "personal_zhaicheng.h"
#include "afxdialogex.h"
#include "CRSEULT.h"


// CRSEULT 对话框

IMPLEMENT_DYNAMIC(CRSEULT, CDialogEx)

CRSEULT::CRSEULT(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_RESULT, pParent)
{

}

CRSEULT::~CRSEULT()
{
}

void CRSEULT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

//控制屏幕中间位置文本：当前选择的射门方向
void CRSEULT::SetShootDirection(const CString& direction)
{
	m_direction = direction;

}

BOOL CRSEULT::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// 设置静态文本控件的内容为当前选择的射门方向
	CString text;
	text.Format(_T("你的射门方向：%s"), m_direction.GetString());
	SetDlgItemText(IDC_STATIC_CHOICE_A, text);
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

BEGIN_MESSAGE_MAP(CRSEULT, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CRSEULT::OnBnClickedButton1)
END_MESSAGE_MAP()


// CRSEULT 消息处理程序

void CRSEULT::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	OnCancel();
}
