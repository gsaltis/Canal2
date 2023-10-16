/*****************************************************************************
 * FILE NAME    : ProgramActionToolbarContainer.h
 * DATE         : October 14 2023
 * PROJECT      : 
 * COPYRIGHT    : Copyright (C) 2023 by Vertiv Company
 *****************************************************************************/
#ifndef _programactiontoolbarcontainer_h_
#define _programactiontoolbarcontainer_h_

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
#define PROGRAM_ACTION_TOOLBAR_CONTAINER_X 200
#define PROGRAM_ACTION_TOOLBAR_CONTAINER_Y 200
#define PROGRAM_ACTION_TOOLBAR_CONTAINER_WIDTH 200
#define PROGRAM_ACTION_TOOLBAR_CONTAINER_HEIGHT 200

/*****************************************************************************!
 * Exported Class : ProgramActionToolbarContainer
 *****************************************************************************/
class ProgramActionToolbarContainer : public QWidget
{
  Q_OBJECT;

 //! Constructors
 public :
  ProgramActionToolbarContainer (QColor InColor, QWidget* InParent);

 //! Destructor
 public :
  ~ProgramActionToolbarContainer ();

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

#endif /* _programactiontoolbarcontainer_h_*/
