/*****************************************************************************
 * FILE NAME    : MainWindow.cpp
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
#include <QMenuBar>
#include <QStatusBar>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/
#include "MainWindow.h"

/*****************************************************************************!
 * Function : MainWindow
 *****************************************************************************/
MainWindow::MainWindow
() : QMainWindow()
{
}

/*****************************************************************************!
 * Function : MainWindow
 *****************************************************************************/
MainWindow::MainWindow
(QWidget* parent) : QMainWindow(parent)
{
    Initialize();
    CreateActions();
    CreateMenus();
    InitializeSubWindows();
    CreateSubWindows();
}

/*****************************************************************************!
 * Function : ~MainWindow
 *****************************************************************************/
MainWindow::~MainWindow
()
{
}

/*****************************************************************************!
 * Function : Initialize
 *****************************************************************************/
void
MainWindow::Initialize()
{
  setWindowTitle(SystemConfig::SystemName);  
}

/*****************************************************************************!
 * Function : CreateSubWindows
 * Purpose  : Create Sub Windows
 *****************************************************************************/
void
MainWindow::CreateSubWindows()
{
  displayWindow = new MainDisplayWindow();  
  displayWindow->setParent(this);
}

/*****************************************************************************!
 * Function : InitializeSubWindows
 * Purpose  : Create Sub Windows
 *****************************************************************************/
void
MainWindow::InitializeSubWindows()
{
  displayWindow = NULL;
}

/*****************************************************************************!
 * Function : resizeEvent
 * Purpose  : Handle Resize Event
 *****************************************************************************/
void
MainWindow::resizeEvent
(QResizeEvent* InEvent)
{
  int                                   menuH;
  int                                   displayWindowX;
  int                                   displayWindowY;
  int                                   displayWindowH;
  int                                   displayWindowW;
  int                                   width;
  int                                   height;
  QSize                                 size;

  size = InEvent->size();
  width = size.width();
  height = size.height();

  menuH = menubar->size().height();
  
  displayWindowX = 0;
  displayWindowY = menuH;
  displayWindowH = height - menuH;
  displayWindowW = width;

  displayWindow->move(displayWindowX, displayWindowY);
  displayWindow->resize(displayWindowW, displayWindowH);

}

/*****************************************************************************!
 * Function : CreateActions
 * Purpose  : Create New Actions
 *****************************************************************************/
void
MainWindow::CreateActions()
{
  ActionExit = new QAction("E&xit", this);
  connect(ActionExit, SIGNAL(triggered()), this, SLOT(SlotExit()));
}

/*****************************************************************************!
 * Function : CreateMenus
 * Purpose  : Create New Menus
 *****************************************************************************/
void
MainWindow::CreateMenus()
{
  menubar = menuBar();
  menubar->setStyleSheet("background-color:#404142; color:#D0D0D0");
  fileMenu      = menubar->addMenu("&File");
  editMenu      = menubar->addMenu("&Edit");
  viewMenu      = menubar->addMenu("&View");
  analyzeMenu   = menubar->addMenu("&Analyze");
  toolsMenu     = menubar->addMenu("&Tools");
  windowMenu    = menubar->addMenu("&Window");
  helpMenu      = menubar->addMenu("&Help");
  fileMenu->addAction(ActionExit);
}

/*****************************************************************************!
 * Function : SlotExit
 *****************************************************************************/
void
MainWindow::SlotExit(void)
{
  exit(EXIT_SUCCESS);  
}

/*****************************************************************************!
 * Function : SlotActionEdit
 *****************************************************************************/
void
MainWindow::SlotActionEdit(void)
{
  
}
