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


BEGIN_MESSAGE_MAP(CRSEULT, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CRSEULT::OnBnClickedButton1)
END_MESSAGE_MAP()


// CRSEULT 消息处理程序

void CRSEULT::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	OnCancel();
}
