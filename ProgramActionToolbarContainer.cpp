/*****************************************************************************
 * FILE NAME    : ProgramActionToolbarContainer.cpp
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
#include "ProgramActionToolbarContainer.h"

/*****************************************************************************!
 * Function : ProgramActionToolbarContainer
 *****************************************************************************/
ProgramActionToolbarContainer::ProgramActionToolbarContainer
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
 * Function : ~ProgramActionToolbarContainer
 *****************************************************************************/
ProgramActionToolbarContainer::~ProgramActionToolbarContainer
()
{
}

/*****************************************************************************!
 * Function : initialize
 *****************************************************************************/
void
ProgramActionToolbarContainer::initialize()
{
  InitializeSubWindows();  
  CreateSubWindows();
}

/*****************************************************************************!
 * Function : CreateSubWindows
 *****************************************************************************/
void
ProgramActionToolbarContainer::CreateSubWindows()
{
  
}

/*****************************************************************************!
 * Function : InitializeSubWindows
 *****************************************************************************/
void
ProgramActionToolbarContainer::InitializeSubWindows()
{
  
}

/*****************************************************************************!
 * Function : resizeEvent
 *****************************************************************************/
void
ProgramActionToolbarContainer::resizeEvent
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
