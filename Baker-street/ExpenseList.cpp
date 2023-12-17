#include "ExpenseList.h"

ExpenseList::~ExpenseList() // деструктор
{ // удалить объекты expense
    // удалить указатели на вектор
    while (!vectPtrsExpenses.empty())
    {
        iter = vectPtrsExpenses.begin();
        delete *iter;
        vectPtrsExpenses.erase(iter);
    }
}
