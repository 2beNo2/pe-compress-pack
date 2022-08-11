﻿
// MyPackerDlg.h: 头文件
//

#pragma once
#include "CPe.h"
#include "CPacker.h"

// CMyPackerDlg 对话框
class CMyPackerDlg : public CDialogEx
{
// 构造
public:
	CMyPackerDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYPACKER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	virtual void OnOK();

public:
	CString m_csPackerFilePath;

public:
	afx_msg void OnBnClickedPacker();
	afx_msg void OnBnClickedCancel();

public:
	void TextLoadLibrary();
};
