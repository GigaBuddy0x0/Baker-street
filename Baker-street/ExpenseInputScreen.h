#ifndef EXPENSEINPUTSCREEN
#define EXPENSEINPUTSCREEN

#include "ExpenseList.h"

//Экран для ввода расходов
class ExpenseInputScreen
{
private:
    ExpenseList* ptrExpenseList; // запись о расходах
public:
    ExpenseInputScreen(ExpenseList*);
    ~ExpenseInputScreen();
    void SetExpense();
};

#endif // EXPENSEINPUTSCREEN

