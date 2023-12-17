#ifndef EXPENSEINPUTSCREEN
#define EXPENSEINPUTSCREEN

#include "ExpenseList.h"

//Экран для ввода расходов
class ExpenseInputScreen
{
private:
    ExpenseList* ptrExpenseList; // запись о расходах
    string ExpenseCategory; // категория расходов (газ, свет, ремонт и тд)
    string ExpenseName; //название расхода
    string ExpenseDate; // дата уплаты расходов
    float ExpenseAmount; // сколько платим
public:
    ExpenseInputScreen(ExpenseList* ptrExp): ptrExpenseList(ptrExp)
    { }
    void SetExpense(); //внести расход
};

#endif // EXPENSEINPUTSCREEN

