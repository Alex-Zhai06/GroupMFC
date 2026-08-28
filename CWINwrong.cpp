// CWINwrong.cpp: 实现文件
//

#include "pch.h"
#include "personal_zhaicheng.h"
#include "afxdialogex.h"
#include "CWINwrong.h"


// CWINwrong 对话框

IMPLEMENT_DYNAMIC(CWINwrong, CDialogEx)

CWINwrong::CWINwrong(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_WR, pParent)
{

}

CWINwrong::~CWINwrong()
{
}

void CWINwrong::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CWINwrong, CDialogEx)
	ON_BN_CLICKED(IDOK, &CWINwrong::OnBnClickedOk)
END_MESSAGE_MAP()


// CWINwrong 消息处理程序

void CWINwrong::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
