
// MixOpenMuteDlg.h : ͷ�ļ�
//

#pragma once


// CMixOpenMuteDlg �Ի���
class CMixOpenMuteDlg : public CDialogEx
{
// ����
public:
	CMixOpenMuteDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MIXOPENMUTE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtongetvolume();
	afx_msg void OnBnClickedButtonGetmute();
};
