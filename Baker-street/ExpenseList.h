#ifndef EXPENSELIST
#define EXPENSELIST

#include "Expense.h"

//Класс записей о затратах
class ExpenseList
{
private:
    vector<Expense*> vectPtrsExpenses; //вектор указателей на расходы
    vector<Expense*>::iterator iter;
public:
    ~ExpenseList();
    void insertExp(Expense*);
    void display();
    float displaySummary(); // нужно для годового отчета
};

#endif // EXPENSELIST

