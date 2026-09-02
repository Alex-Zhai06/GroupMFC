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
	DDX_Control(pDX, IDC_STATIC_CHOICE, m_pictureResult);
}

//控制屏幕中间位置文本：当前选择的射门方向
void CRSEULT::SetShootDirection(const CString& direction)
{
	m_direction = direction;

}

BOOL CRSEULT::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	//根据射门结果选择一张图片显示在最上面
	m_bmpGOAL.LoadBitmap(IDB_GOAL_800);
	m_bmpSAVE.LoadBitmap(IDB_SAVE_800);
	m_bmpWIDE.LoadBitmap(IDB_WIDE_800);

	CString result1 = _T("SAVE");
	ShowResultImage(result1);

	// 设置静态文本控件的内容为当前选择的射门方向
	CString text;
	text.Format(_T("你的射门方向：%s"), m_direction.GetString());
	SetDlgItemText(IDC_STATIC_CHOICE_A, text);
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CRSEULT::ShowResultImage(const CString& result)
{
	CBitmap* p_map = nullptr;

	if (result == _T("GOAL"))
	{
		p_map = &m_bmpGOAL;
	}
	else if (result == _T("SAVE"))
	{
		p_map = &m_bmpSAVE;
	}
	else if (result == _T("WIDE"))
	{
		p_map = &m_bmpWIDE;
	}
	
	m_pictureResult.SetBitmap((HBITMAP)(*p_map));
	m_pictureResult.Invalidate(); // 刷新控件以显示新的图片
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
