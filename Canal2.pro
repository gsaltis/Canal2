QMAKE_CXX                       = @echo [C+] $@ && g++ 

QMAKE_CC                        = @echo [C+] $@ && gcc 

QMAKE_MOC                       = @echo [MO] $@ && moc 

QMAKE_LINK                      = @echo [LD] $@ && g++ 

QMAKE_RC                        = @echo [RC] $@ && windres 

QMAKE_LFLAGS_WINDOWS            += -mwindows

QMAKE_CXXFLAGS                  += 

QMAKE_LIBS                      = 

TARGET                          = canal

VERSION                         = "0.0.0"
QMAKE_TARGET_COMPANY            = "Vertiv Company"

QMAKE_TARGET_PRODUCT            = "Canal2"

QMAKE_TARGET_COPYRIGHT          = "Copyright (C) 2023 Vertiv Company"

QT                              += core gui widgets

DEFINES                         += \

SOURCES                         += \
				   MainDisplaySplitter.cpp                      \
				   MainDisplayWindow.cpp                        \
				   MainFiller.cpp                               \
				   MainStatusBar.cpp                            \
				   MainWindow.cpp                               \
				   ProgramActionToolbarContainer.cpp            \
				   SystemConfig.cpp                             \
				   main.cpp                                     \

HEADERS                         += \
				   MainDisplaySplitter.h                        \
				   MainDisplayWindow.h                          \
				   MainFiller.h                                 \
				   MainStatusBar.h                              \
				   MainWindow.h                                 \
				   ProgramActionToolbarContainer.h              \
				   SystemConfig.h                               \

FORMS                           += \

QMAKE_EXTRA_TARGETS             += junkclean
junkclean.target                = junkclean
junkclean.commands              = @echo Removing junk                           \
                                  && rm -rf $(wildcard core* *~)
junkclean.depends               = 

QMAKE_EXTRA_TARGETS             += cleanall
cleanall.target                 = cleanall
cleanall.commands               = 
cleanall.depends                = junkclean                                     \
                                  clean
