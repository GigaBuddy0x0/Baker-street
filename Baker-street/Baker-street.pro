TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    UserInterface.cpp \
    ProduceList.cpp \
    ExpenseList.cpp \
    ProfitList.cpp \
    Produce.cpp \
    Expense.cpp \
    Profit.cpp \
    AnnualReport.cpp \
    ExpenseInputScreen.cpp \
    ProduceInputScreen.cpp \
    ProfitInputScreen.cpp \
    globalmetods.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    ProduceList.h \
    UserInterface.h \
    ProduceInputScreen.h \
    Produce.h \
    AnnualReport.h \
    Expense.h \
    ExpenseInputScreen.h \
    ExpenseList.h \
    Profit.h \
    ProfitInputScreen.h \
    ProfitList.h \
    libs.h \
    globalmetods.h
