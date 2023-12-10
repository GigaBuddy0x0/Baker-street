#ifndef EXPENSE
#define EXPENSE

#include "libs.h"

//Класс затрат
class Expense
{
private:
    string category; // категория расходов (газ, свет, ремонт и тд)
    string name; //название расхода
    string date; // дата уплаты расходов
    float amount; // сколько платим
public:
    Expense(string c, string n, string d, float a):
        category(c), name(n), date(d), amount(a)
    {}
    ~Expense();
    //геттеры:
    string GetCategory();
    string GetName();
    string GetDate();
    float GetAmount();
};

#endif // EXPENSE

