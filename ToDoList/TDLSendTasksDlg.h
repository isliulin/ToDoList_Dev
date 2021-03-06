#if !defined(AFX_TDLSENDTASKSDLG_H__02DB12DD_A125_4754_AE1C_F8BB9EE45903__INCLUDED_)
#define AFX_TDLSENDTASKSDLG_H__02DB12DD_A125_4754_AE1C_F8BB9EE45903__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TDLSendTasksDlg.h : header file
//

#include "TaskSelectionDlg.h"
#include "TDLDialog.h"
#include "tdlimportexportcombobox.h"

#include "..\shared\importexportmgr.h"

/////////////////////////////////////////////////////////////////////////////

enum TD_SENDAS
{
	TDSA_TASKLIST,
	TDSA_BODYTEXT,	
};

/////////////////////////////////////////////////////////////////////////////
// CTDLSendTasksDlg dialog

class CTDLSendTasksDlg : public CTDLDialog
{
// Construction
public:
	CTDLSendTasksDlg(const CImportExportMgr& mgr, BOOL bSelectedTasks, FTC_VIEW nView, 
					const CTDCCustomAttribDefinitionArray& aAttribDefs, CWnd* pParent = NULL);   // standard constructor

	TD_SENDAS GetSendAs() const { return (TD_SENDAS)m_nSendTasksAsOption; }
	int GetExportFormat() { return m_nFormatOption; }

	const CTaskSelectionDlg& GetTaskSelection() const { return m_dlgTaskSel; }

protected:
    CTaskSelectionDlg m_dlgTaskSel;
// Dialog Data
	//{{AFX_DATA(CTDLSendTasksDlg)
	enum { IDD = IDD_SENDTASKS_DIALOG };
	int		m_nSendTasksAsOption;
	int		m_nFormatOption;
	//}}AFX_DATA
	CTDLImportExportComboBox m_cbFormat;

// Overrides
	virtual void OnOK();
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTDLSendTasksDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTDLSendTasksDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TDLSENDTASKSDLG_H__02DB12DD_A125_4754_AE1C_F8BB9EE45903__INCLUDED_)
