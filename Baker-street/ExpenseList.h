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
    void InsertExpense(Expense*); //внести расход
    float DisplaySummExpenses(); //вывести сумму всех расходов
    void DisplayExp(); //вывести строку расходов
    //геттеры:
    string GetCategoryExpense(string);
    //string GetNameExpense(string);
    string GetDateExpense(string);
    float GetAmountExpense(string);
};

#endif // EXPENSELIST

