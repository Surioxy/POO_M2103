TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -static
SOURCES += \
    CException.cpp \
    ClasseEditable.cpp

HEADERS += \
    CException.h \
    CstCodErr.h \
    IEditable.hpp

DISTFILES +=
