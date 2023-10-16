/*****************************************************************************
 * FILE NAME    : MainFiller.cpp
 * DATE         : October 13 2023
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
#include "MainFiller.h"

/*****************************************************************************!
 * Function : MainFiller
 *****************************************************************************/
MainFiller::MainFiller
(QColor InColor, QWidget* InParent) : QFrame(InParent)
{
  QPalette pal;
  pal = palette();
  pal.setBrush(QPalette::Window, QBrush(InColor));
  setPalette(pal);
  setAutoFillBackground(true);
  initialize();
}

/*****************************************************************************!
 * Function : ~MainFiller
 *****************************************************************************/
MainFiller::~MainFiller
()
{
}

/*****************************************************************************!
 * Function : initialize
 *****************************************************************************/
void
MainFiller::initialize()
{
  InitializeSubWindows();  
  CreateSubWindows();
}

/*****************************************************************************!
 * Function : CreateSubWindows
 *****************************************************************************/
void
MainFiller::CreateSubWindows()
{
  
}

/*****************************************************************************!
 * Function : InitializeSubWindows
 *****************************************************************************/
void
MainFiller::InitializeSubWindows()
{
  
}

/*****************************************************************************!
 * Function : resizeEvent
 *****************************************************************************/
void
MainFiller::resizeEvent
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

