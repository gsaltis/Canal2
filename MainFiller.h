/*****************************************************************************
 * FILE NAME    : MainFiller.h
 * DATE         : October 13 2023
 * PROJECT      : 
 * COPYRIGHT    : Copyright (C) 2023 by Vertiv Company
 *****************************************************************************/
#ifndef _mainfiller_h_
#define _mainfiller_h_

/*****************************************************************************!
 * Global Headers
 *****************************************************************************/
#include <QtCore>
#include <QtGui>
#include <QWidget>
#include <QFrame>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/

/*****************************************************************************!
 * Exported Macros
 *****************************************************************************/
#define MAIN_FILLER_X                   200
#define MAIN_FILLER_Y                   200
#define MAIN_FILLER_WIDTH               200
#define MAIN_FILLER_HEIGHT              200

/*****************************************************************************!
 * Exported Class : MainFiller
 *****************************************************************************/
class MainFiller : public QFrame
{
  Q_OBJECT;

 //! Constructors
 public :
  MainFiller                    (QColor InColor, QWidget* InParent);

 //! Destructor
 public :
  ~MainFiller                   ();

 //! Public Methods
 public :

 //! Public Data
 public :

 //! Protected Methods
 protected :
  void                          resizeEvent             (QResizeEvent* InEvent);
  
 //! Protected Data
 protected :

 //! Private Methods
 private :
  void                          initialize              ();
  void                          CreateSubWindows        ();
  void                          InitializeSubWindows    ();

 //! Private Data
 private :

 //! Public Slots
 public slots :

 //! Public Signals
 signals :

 //! Public Actions
 public :

};

#endif /* _mainfiller_h_*/
