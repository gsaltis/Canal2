/*****************************************************************************
 * FILE NAME    : MainDisplaySplitter.h
 * DATE         : October 14 2023
 * PROJECT      : 
 * COPYRIGHT    : Copyright (C) 2023 by Vertiv Company
 *****************************************************************************/
#ifndef _maindisplaysplitter_h_
#define _maindisplaysplitter_h_

/*****************************************************************************!
 * Global Headers
 *****************************************************************************/
#include <QtCore>
#include <QtGui>
#include <QSplitter>
#include <QWidget>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/

/*****************************************************************************!
 * Exported Macros
 *****************************************************************************/
#define MAIN_DISPLAY_SPLITTER_X         200
#define MAIN_DISPLAY_SPLITTER_Y         200
#define MAIN_DISPLAY_SPLITTER_WIDTH     200
#define MAIN_DISPLAY_SPLITTER_HEIGHT    200

/*****************************************************************************!
 * Exported Class : MainDisplaySplitter
 *****************************************************************************/
class MainDisplaySplitter : public QSplitter
{
  Q_OBJECT;

 //! Constructors
 public :
  MainDisplaySplitter           ();

 //! Destructor
 public :
  ~MainDisplaySplitter          ();

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

#endif /* _maindisplaysplitter_h_*/
