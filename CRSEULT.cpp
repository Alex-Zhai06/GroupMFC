// CRSEULT.cpp: 实现文件
//

#include "pch.h"
#include "personal_zhaicheng.h"
#include "afxdialogex.h"
#include "CRSEULT.h"

#include <cstdlib> //随机射门打飞
#include <ctime>


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

	//显示射门结果
	CString text3;

	CString result1; //控制图片显示

	srand((unsigned int)time(nullptr));

	//守门员随机在左侧和右侧等概率扑救
	int goalkeep = rand() % 100;
	if (goalkeep < 50) {
		//左侧
		m_save = _T("左侧"); // 设置守门员扑救方向
	}
	else {
		//右侧
		m_save = _T("右侧"); // 设置守门员扑救方向
	}

	int num = rand() % 100;
	if (num < 20) {
		//射门打飞
		result1 = _T("WIDE");
		text3 = _T("打飞");
	}
	else {
		if (m_direction == m_save) {
			//守门员扑救方向与射门方向相同，射门被扑出
			result1 = _T("SAVE");
			text3 = _T("被扑出");
		}
		else {
			//守门员扑救方向与射门方向不同，射门进球
			result1 = _T("GOAL");
			text3 = _T("进球！");
		}
	}
	
	ShowResultImage(result1);

	

	// 设置静态文本控件的内容为当前选择的射门方向
	CString text;
	text.Format(_T("你的射门方向：%s"), m_direction.GetString());
	SetDlgItemText(IDC_STATIC_CHOICE_A, text);

	//显示守门员扑救方向
	CString text2;
	text2.Format(_T("守门员扑救方向：%s"), m_save.GetString());
	SetDlgItemText(IDC_STATIC_CHOICE_B, text2);
	
	//显示最终结果
	SetDlgItemText(IDC_STATIC_CHOICE_C, text3);

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
	
	m_pictureResult.SetBitmap((HBITMAP)(p_map->GetSafeHandle()));
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
