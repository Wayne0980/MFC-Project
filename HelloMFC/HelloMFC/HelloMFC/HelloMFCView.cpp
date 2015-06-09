// �o�� MFC �d�ҭ�l�{���X�|�ܽd�p��ϥ� MFC Microsoft Office Fluent �ϥΪ̤���
// (�uFluent UI�v)�A�åB�ȴ��Ѭ��ѦҸ�ơA����
// MFC �ѦҤ� MFC C++ �{���w�n��
// �H�������q�l��󪺸ɥR�C
// ���� Fluent UI ���ƻs�B�ϥΩδ��o�����v���ګh���O���ѡC
// �p�� Fluent UI ���v�p�����ԲӸ�T�A�гy�X 
// http://msdn.microsoft.com/officeui�C
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// HelloMFCView.cpp : CHelloMFCView ���O����@
//

#include "stdafx.h"
// SHARED_HANDLERS �i�H�w�q�b��@�w���B�Y�ϩM�j�M�z�����B�z�`����
// ATL �M�פ��A�ä��\�P�ӱM�צ@�Τ��{���X�C
#ifndef SHARED_HANDLERS
#include "HelloMFC.h"
#endif

#include "HelloMFCDoc.h"
#include "HelloMFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHelloMFCView

IMPLEMENT_DYNCREATE(CHelloMFCView, CView)

BEGIN_MESSAGE_MAP(CHelloMFCView, CView)
	// �зǦC�L�R�O
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CHelloMFCView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CHelloMFCView �غc/�Ѻc

CHelloMFCView::CHelloMFCView()
{
	// TODO: �b���[�J�غc�{���X

}

CHelloMFCView::~CHelloMFCView()
{
}

BOOL CHelloMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �b���g�ѭק� CREATESTRUCT cs 
	// �F��ק�������O�μ˦����ت�

	return CView::PreCreateWindow(cs);
}

// CHelloMFCView �yø

void CHelloMFCView::OnDraw(CDC* /*pDC*/)
{
	CHelloMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �b���[�J��͸�ƪ��yø�{���X
}


// CHelloMFCView �C�L


void CHelloMFCView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CHelloMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �w�]���ǳƦC�L�{���X
	return DoPreparePrinting(pInfo);
}

void CHelloMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �[�J�C�L�e�B�~����l�]�w
}

void CHelloMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �[�J�C�L�᪺�M���{���X
}

void CHelloMFCView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CHelloMFCView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CHelloMFCView �E�_

#ifdef _DEBUG
void CHelloMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CHelloMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHelloMFCDoc* CHelloMFCView::GetDocument() const // ���O�D��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHelloMFCDoc)));
	return (CHelloMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CHelloMFCView �T���B�z�`��
