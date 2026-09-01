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
	//CString country = _T("阿根廷"); //country变量存储前一页选择的国家名称
	//CString text;
	//text.Format(_T("当前选择：%s"), country.GetString());
	//SetDlgItemText(IDC_STATIC_CHOICE, text);
}

CSHOOTDialog::~CSHOOTDialog()
{
}

void CSHOOTDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
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
	cw4.DoModal();
}

void CSHOOTDialog::OnBnClicked1001()
{
	// TODO: 在此添加控件通知处理程序代码
	cw4.DoModal();
}
