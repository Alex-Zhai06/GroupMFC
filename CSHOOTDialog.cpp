// CSHOOTDialog.cpp: 实现文件
//

#include "pch.h"
#include "personal_zhaicheng.h"
#include "afxdialogex.h"
#include "CSHOOTDialog.h"


// CSHOOTDialog 对话框

IMPLEMENT_DYNAMIC(CSHOOTDialog, CDialogEx)

CSHOOTDialog::CSHOOTDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_GROUPWORKZHAICHENG_DIALOG, pParent)
{
}

CSHOOTDialog::~CSHOOTDialog()
{
}

void CSHOOTDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

//控制屏幕中上位置文本：当前选择的国家
void CSHOOTDialog::SetCountry(const CString& country) 
{
	m_country = country;
	
}

BOOL CSHOOTDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// 设置静态文本控件的内容为当前选择的国家
	CString text;
	text.Format(_T("当前选择：%s"), m_country.GetString());
	SetDlgItemText(IDC_STATIC_CHOICE, text);
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

BEGIN_MESSAGE_MAP(CSHOOTDialog, CDialogEx)
	ON_BN_CLICKED(1002, &CSHOOTDialog::OnBnClicked1002)
	ON_BN_CLICKED(1000, &CSHOOTDialog::OnBnClicked1000)
	ON_BN_CLICKED(1001, &CSHOOTDialog::OnBnClicked1001)
END_MESSAGE_MAP()


// CSHOOTDialog 消息处理程序

void CSHOOTDialog::OnBnClicked1002()
{
	// TODO: 在此添加控件通知处理程序代码
	OnCancel();
}

void CSHOOTDialog::OnBnClicked1000()
{
	// TODO: 在此添加控件通知处理程序代码
	SetDlgItemText(IDC_STATIC_TIP, _T("射门中……请稍等")); //修改原来的“请选择射门方向”为射门中……请稍等
	GetDlgItem(IDC_STATIC_TIP)->UpdateWindow();
	Sleep(900); // 模拟射门过程，延迟0.9秒

	m_direction = _T("左侧");
	CRSEULT dlg(this);
	dlg.SetShootDirection(m_direction); // 将选择的射门方向传递给射门页面
	dlg.DoModal();

	SetDlgItemText(IDC_STATIC_TIP, _T("结果已确认，可以继续射门或返回选人")); //修改原来的“请选择射门方向”为"结果已确认，可以继续射门或返回选人"
}

void CSHOOTDialog::OnBnClicked1001()
{
	// TODO: 在此添加控件通知处理程序代码
	SetDlgItemText(IDC_STATIC_TIP, _T("射门中……请稍等")); //修改原来的“请选择射门方向”为射门中……请稍等
	GetDlgItem(IDC_STATIC_TIP)->UpdateWindow();
	Sleep(900); // 模拟射门过程，延迟0.9秒

	m_direction = _T("右侧");
	CRSEULT dlg(this);
	dlg.SetShootDirection(m_direction); // 将选择的射门方向传递给射门页面
	dlg.DoModal();

	SetDlgItemText(IDC_STATIC_TIP, _T("结果已确认，可以继续射门或返回选人")); //修改原来的“请选择射门方向”为"结果已确认，可以继续射门或返回选人"
}
