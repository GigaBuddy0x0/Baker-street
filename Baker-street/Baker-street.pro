TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    UserInterface.cpp

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
    ProfitList.h

