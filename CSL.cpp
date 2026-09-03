// CSL.cpp: 实现文件
//

#include "pch.h"
#include "personal_zhaicheng.h"
#include "afxdialogex.h"
#include "CSL.h"



// CSL 对话框

IMPLEMENT_DYNAMIC(CSL, CDialogEx)

CSL::CSL(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SL, pParent)
{
}

CSL::~CSL()
{
}

void CSL::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	
}


BEGIN_MESSAGE_MAP(CSL, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CSL::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CSL::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CSL::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CSL::OnBnClickedButton4)
END_MESSAGE_MAP()


// CSL 消息处理程序

void CSL::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	OnCancel();
}

void CSL::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	m_country = _T("西班牙");
	CSHOOTDialog dlg(this);
	dlg.SetCountry(m_country); // 将选择的国家传递给射门页面
	dlg.DoModal();

}

void CSL::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_country = _T("阿根廷");
	CSHOOTDialog dlg(this);
	dlg.SetCountry(m_country); // 将选择的国家传递给射门页面
	dlg.DoModal();
}

void CSL::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	m_country = _T("英格兰");
	CSHOOTDialog dlg(this);
	dlg.SetCountry(m_country); // 将选择的国家传递给射门页面
	dlg.DoModal();
}
