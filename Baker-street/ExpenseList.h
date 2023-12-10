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
    //геттеры:
    string GetCategoryExpense(string);
    //string GetNameExpense(string);
    string GetDateExpense(string);
    float GetAmountExpense(string);
};

#endif // EXPENSELIST

