#ifndef EXPENSE
#define EXPENSE

#include "libs.h"

//Класс затрат
class Expense
{
private:
    string category; // категория расходов (газ, свет, ремонт и тд)
    string expense_item; //название расхода
    string month; // месяц уплаты расходов
    float amount; // сколько платим
public:
    Expense(string c, string e, string m, float a):
        category(c), expense_item(e), month(m),amount(a)
    {}
    ~Expense();
    string GetCategory();
    string GetExpense_item();
    string GetMonth();
    float GetAmount();
};

#endif // EXPENSE

