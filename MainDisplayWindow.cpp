/*****************************************************************************
 * FILE NAME    : MainDisplayWindow.cpp
 * DATE         : October 13 2023
 * PROJECT      : Canal2
 * COPYRIGHT    : Copyright (C) 2023 by Vertiv Company
 *****************************************************************************/

/*****************************************************************************!
 * Global Headers
 *****************************************************************************/
#include <QtCore>
#include <QtGui>
#include <QWidget>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/
#include "MainDisplayWindow.h"

/*****************************************************************************!
 * Local Macros
 *****************************************************************************/
#define PROGRAM_ACTION_TOOLBAR_WIDTH            55

#define FILLER_WINDOW_1_HEIGHT                  19

/*****************************************************************************!
 * Function : MainDisplayWindow
 *****************************************************************************/
MainDisplayWindow::MainDisplayWindow
() : QWidget()
{
  QPalette                              pal;

  pal = palette();
  pal.setBrush(QPalette::Window, QBrush(QColor(46, 47, 48)));
  setPalette(pal);
  setAutoFillBackground(true);

  Initialize();
}

/*****************************************************************************!
 * Function : ~MainDisplayWindow
 *****************************************************************************/
MainDisplayWindow::~MainDisplayWindow
()
{
}

/*****************************************************************************!
 * Function : Initialize
 *****************************************************************************/
void
MainDisplayWindow::Initialize()
{
  InitializeSubWindows();  
  CreateSubWindows();
}

/*****************************************************************************!
 * Function : InitializeSubWindows
 *****************************************************************************/
void
MainDisplayWindow::InitializeSubWindows()
{
  fillerWindow1 = NULL;  
  programToolbar = NULL;
  splitter = NULL;
}

/*****************************************************************************!
 * Function : CreateSubWindows
 *****************************************************************************/
void
MainDisplayWindow::CreateSubWindows()
{
  fillerWindow1 = new MainFiller(QColor(64, 65, 66), this);
  programToolbar = new ProgramActionToolbarContainer(QColor(64, 65, 66), this);
  statusbar = new MainStatusBar(QColor(64, 65, 66), this);
  splitter = new MainDisplaySplitter();
  splitter->setParent(this);
}

/*****************************************************************************!
 * Function : resizeEvent
 *****************************************************************************/
void
MainDisplayWindow::resizeEvent
(QResizeEvent* InEvent)
{
  int                                   programToolbarH;
  int                                   programToolbarY;
  int                                   programToolbarX;
  int                                   programToolbarW;
  QSize                                 size;  
  int                                   width;
  int                                   height;

  int                                   statusbarH = MAIN_STATUS_BAR_HEIGHT;
  int                                   statusbarX = PROGRAM_ACTION_TOOLBAR_WIDTH + 2;
  int                                   statusbarW;
  int                                   statusbarY;

  int                                   splitterX;
  int                                   splitterY;
  int                                   splitterW;
  int                                   splitterH;
  
  size = InEvent->size();
  width = size.width();
  height = size.height();
  (void)width;
  if ( fillerWindow1 ) {
    fillerWindow1->move(1, 1);
    fillerWindow1->resize(PROGRAM_ACTION_TOOLBAR_WIDTH, FILLER_WINDOW_1_HEIGHT);
  }

  programToolbarW = PROGRAM_ACTION_TOOLBAR_WIDTH;
  programToolbarX = 1;
  programToolbarY = 2 + FILLER_WINDOW_1_HEIGHT;
  programToolbarH = height - (2 + FILLER_WINDOW_1_HEIGHT);
  if ( programToolbar ) {
    programToolbar->move(programToolbarX, programToolbarY);
    programToolbar->resize(programToolbarW, programToolbarH);
  }
  statusbarW = width - (PROGRAM_ACTION_TOOLBAR_WIDTH + 3);
  statusbarY = height - statusbarH;

  statusbar->move(statusbarX, statusbarY);
  statusbar->resize(statusbarW, statusbarH);

  splitterX = programToolbarX + programToolbarW + 1;
  splitterY = 1;
  splitterW = width - (splitterX + 1);
  splitterH = height - (2 + FILLER_WINDOW_1_HEIGHT);
  if ( splitter ) { 
	splitter->move(splitterX, splitterY);
	splitter->resize(splitterW, splitterH);
  }
}

