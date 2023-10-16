/*****************************************************************************
 FILE NAME      : main.cpp
 DATE           : October 13 2023
 PROJECT        : Canal2
 COPYRIGHT      : Copyright (C) 2023 by Vertiv Company
******************************************************************************/

/*****************************************************************************!
 * Global Headers
 *****************************************************************************/
#include <QtCore>
#include <QApplication>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <QtGui>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/
#include "MainWindow.h"
#include "main.h"

/*****************************************************************************!
 * Local Macros
 *****************************************************************************/

/*****************************************************************************!
 * Local Functions
 *****************************************************************************/

/*****************************************************************************!
 * Local Data
 *****************************************************************************/

/*****************************************************************************!
 * Function : main
 *****************************************************************************/
int
main
(int argc, char** argv)
{
  QApplication 				application(argc, argv);
  MainWindow* 				w;
  
  application.setApplicationName("Canal2");
  application.setApplicationVersion("0.0.0");
  application.setOrganizationName("Vertiv Company");
  application.setOrganizationDomain("www.vertivco.com");
  
  w = new MainWindow(NULL);
  w->resize(MAIN_WINDOW_WIDTH, MAIN_WINDOW_HEIGHT);
  w->move(MAIN_WINDOW_X, MAIN_WINDOW_Y);
  w->show();
  
  return application.exec();
}
