// CSL.cpp: 实现文件
//

#include "pch.h"
#include "personal_zhaicheng.h"
#include "afxdialogex.h"
#include "CSL.h"
#include<fstream>
#include<atlconv.h>

bool Saved = false;
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
	DDX_Text(pDX, IDC_EDIT_STU, stulist);
}


BEGIN_MESSAGE_MAP(CSL, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT_STU, &CSL::OnEnChangeEditstu)
	ON_BN_CLICKED(IDC_BUTTON1, &CSL::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CSL::OnBnClickedButton2)
END_MESSAGE_MAP()


// CSL 消息处理程序

void CSL::OnEnChangeEditstu()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void CSL::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CW2A utf8(stulist, CP_UTF8);
	std::ofstream ofile("myfile.txt");
	ofile << utf8;
	ofile.close();
	Saved = true;
}

void CSL::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	if (Saved) {
		AfxGetMainWnd()->PostMessageW(WM_CLOSE);
		OnCancel();
	}
	else {
		UpdateData(TRUE);
		if (stulist != "") {
			cw3.DoModal();
		}
		else {
			AfxGetMainWnd()->PostMessageW(WM_CLOSE);
			OnCancel();
		}
	}
	
}
