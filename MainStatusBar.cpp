/*****************************************************************************
 * FILE NAME    : MainStatusBar.cpp
 * DATE         : October 14 2023
 * PROJECT      : 
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
#include "MainStatusBar.h"

/*****************************************************************************!
 * Function : MainStatusBar
 *****************************************************************************/
MainStatusBar::MainStatusBar
(QColor InColor, QWidget* InParent) : QWidget(InParent)
{
  QPalette pal;
  pal = palette();
  pal.setBrush(QPalette::Window, QBrush(InColor));
  setPalette(pal);
  setAutoFillBackground(true);
  initialize();
}

/*****************************************************************************!
 * Function : ~MainStatusBar
 *****************************************************************************/
MainStatusBar::~MainStatusBar
()
{
}

/*****************************************************************************!
 * Function : initialize
 *****************************************************************************/
void
MainStatusBar::initialize()
{
  InitializeSubWindows();  
  CreateSubWindows();
}

/*****************************************************************************!
 * Function : CreateSubWindows
 *****************************************************************************/
void
MainStatusBar::CreateSubWindows()
{
  
}

/*****************************************************************************!
 * Function : InitializeSubWindows
 *****************************************************************************/
void
MainStatusBar::InitializeSubWindows()
{
  
}

/*****************************************************************************!
 * Function : resizeEvent
 *****************************************************************************/
void
MainStatusBar::resizeEvent
(QResizeEvent* InEvent)
{
  QSize                                 size;  
  int                                   width;
  int                                   height;

  size = InEvent->size();
  width = size.width();
  height = size.height();
  (void)height;
  (void)width;
}
