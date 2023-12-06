#ifndef EXPENSE
#define EXPENSE

#include "libs.h"

//Класс затрат
class Expense
{
public:
    int month, day; // месяц и день уплаты расходов
    string category; // категория расходов (газ, свет, ремонт и тд)
    string payee; // кому платим (поставщики газа, света, сервисный центр...)
    float amount; // сколько платим
    Expense()
    { }
    Expense(int m, int d, string c, string p, float a) :
        month(m), day(d), category(c), payee(p), amount(a)
    { }
};

#endif // EXPENSE

