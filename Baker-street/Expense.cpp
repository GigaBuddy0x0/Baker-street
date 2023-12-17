#include "Expense.h"

Expense::~Expense() // деструктор
{ }

string Expense::GetCategory()
{
    return category;
}

string Expense::GetName()
{
    return name;
}

string Expense::GetDate()
{
    return date;
}

float Expense::GetAmount()
{
    return amount;
}
