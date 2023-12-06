#ifndef EXPENSEINPUTSCREEN
#define EXPENSEINPUTSCREEN

#include "ExpenseList.h"

//Класс для ввода расходов
class ExpenseInputScreen
{
private:
    ExpenseList* ptrExpenseList; // запись о расходах
public:
    ExpenseInputScreen(ExpenseList*);
    void setExpense();
};

#endif // EXPENSEINPUTSCREEN

