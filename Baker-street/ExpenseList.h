#ifndef EXPENSELIST
#define EXPENSELIST

#include "Expense.h"

//Класс записей о расходах
class ExpenseList
{
private:
    vector<Expense*> vectPtrsExpenses; //вектор указателей на расходы
    vector<Expense*>::iterator iter;
public:
    ~ExpenseList();
    void InsertExpense(Expense*);
    float DisplaySummExpenses();
    void DisplayExp();
};

#endif // EXPENSELIST

