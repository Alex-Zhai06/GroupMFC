#pragma once

class CScaledBitmapStatic : public CStatic
{
public:
	CScaledBitmapStatic();
	virtual ~CScaledBitmapStatic();
	BOOL LoadBitmapResource(UINT nResourceId);
	void SetBitmapHandle(HBITMAP hBitmap);
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
private:
	CBitmap m_ownedBitmap;
	HBITMAP m_hBitmap;
};
