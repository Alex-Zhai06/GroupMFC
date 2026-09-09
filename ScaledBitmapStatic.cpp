#include "pch.h"
#include "ScaledBitmapStatic.h"

CScaledBitmapStatic::CScaledBitmapStatic() : m_hBitmap(nullptr) {}
CScaledBitmapStatic::~CScaledBitmapStatic() {}
BEGIN_MESSAGE_MAP(CScaledBitmapStatic, CStatic)
	ON_WM_PAINT()
END_MESSAGE_MAP()

BOOL CScaledBitmapStatic::LoadBitmapResource(UINT nResourceId)
{
	if (m_ownedBitmap.GetSafeHandle() != nullptr) m_ownedBitmap.DeleteObject();
	if (!m_ownedBitmap.LoadBitmap(nResourceId)) { m_hBitmap = nullptr; return FALSE; }
	m_hBitmap = static_cast<HBITMAP>(m_ownedBitmap.GetSafeHandle());
	Invalidate(FALSE);
	return TRUE;
}

void CScaledBitmapStatic::SetBitmapHandle(HBITMAP hBitmap)
{
	m_hBitmap = hBitmap;
	Invalidate(FALSE);
}

void CScaledBitmapStatic::OnPaint()
{
	CPaintDC dc(this);
	CRect client;
	GetClientRect(&client);
	dc.FillSolidRect(client, GetSysColor(COLOR_3DFACE));
	if (m_hBitmap == nullptr) return;
	BITMAP bitmap = {};
	if (::GetObject(m_hBitmap, sizeof(bitmap), &bitmap) == 0 || bitmap.bmWidth <= 0 || bitmap.bmHeight <= 0) return;
	CDC sourceDC;
	sourceDC.CreateCompatibleDC(&dc);
	HGDIOBJ oldBitmap = sourceDC.SelectObject(m_hBitmap);
	const double scale = min(static_cast<double>(client.Width()) / bitmap.bmWidth,
		static_cast<double>(client.Height()) / bitmap.bmHeight);
	const int width = static_cast<int>(bitmap.bmWidth * scale);
	const int height = static_cast<int>(bitmap.bmHeight * scale);
	dc.SetStretchBltMode(HALFTONE);
	::SetBrushOrgEx(dc.GetSafeHdc(), 0, 0, nullptr);
	dc.StretchBlt((client.Width() - width) / 2, (client.Height() - height) / 2,
		width, height, &sourceDC, 0, 0, bitmap.bmWidth, bitmap.bmHeight, SRCCOPY);
	sourceDC.SelectObject(oldBitmap);
}
