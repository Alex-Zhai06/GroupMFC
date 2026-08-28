// CQUIT.cpp: 实现文件
//

#include "pch.h"
#include "personal_zhaicheng.h"
#include "afxdialogex.h"
#include "CQUIT.h"


// CQUIT 对话框

IMPLEMENT_DYNAMIC(CQUIT, CDialogEx)

CQUIT::CQUIT(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CQUIT, pParent)
{

}

CQUIT::~CQUIT()
{
}

void CQUIT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CQUIT, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CQUIT::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CQUIT::OnBnClickedButton2)
END_MESSAGE_MAP()


// CQUIT 消息处理程序

void CQUIT::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CWnd* pMainWnd = AfxGetApp()->m_pMainWnd;

	if (pMainWnd != nullptr)
	{
		pMainWnd->DestroyWindow();
	}

	PostQuitMessage(0);
}

void CQUIT::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	OnCancel();
}
