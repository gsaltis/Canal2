/*****************************************************************************
 * FILE NAME    : MainStatusBar.h
 * DATE         : October 14 2023
 * PROJECT      : 
 * COPYRIGHT    : Copyright (C) 2023 by Vertiv Company
 *****************************************************************************/
#ifndef _mainstatusbar_h_
#define _mainstatusbar_h_

/*****************************************************************************!
 * Global Headers
 *****************************************************************************/
#include <QtCore>
#include <QtGui>
#include <QWidget>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/

/*****************************************************************************!
 * Exported Macros
 *****************************************************************************/
#define MAIN_STATUS_BAR_X               200
#define MAIN_STATUS_BAR_Y               200
#define MAIN_STATUS_BAR_WIDTH           200
#define MAIN_STATUS_BAR_HEIGHT          26

/*****************************************************************************!
 * Exported Class : MainStatusBar
 *****************************************************************************/
class MainStatusBar : public QWidget
{
  Q_OBJECT;

 //! Constructors
 public :
  MainStatusBar                 (QColor InColor, QWidget* InParent);

 //! Destructor
 public :
  ~MainStatusBar                ();

 //! Public Methods
 public :

 //! Public Data
 public :

 //! Protected Methods
 protected :

 //! Protected Data
 protected :

 //! Private Methods
 private :
  void                          initialize              ();
  void                          CreateSubWindows        ();
  void                          InitializeSubWindows    ();
  void                          resizeEvent             (QResizeEvent* InEvent);

 //! Private Data
 private :

 //! Public Slots
 public slots :

 //! Public Signals
 signals :

 //! Public Actions
 public :

};

#endif /* _mainstatusbar_h_*/
