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

void ExpenseList::InsertExpense(Expense* ptrExp)
{
    vectPtrsExpenses.push_back(ptrExp);
}

void ExpenseList::DisplayExp() // отобразить все строки с рентами
{
    cout << endl;
    cout << setw(15) << "Category" << setw(15) << "Name"
         << setw(15) << "Date" << setw(15) << "Amount";
    cout << endl << "----------------------------------------------------------------------" << endl;
    if (vectPtrsExpenses.empty()) // если список жильцов пуст
    cout << "***There's nothing here***\n" << endl; // выводим запись, что он пуст)
    else
    {
        iter = vectPtrsExpenses.begin();
        while (iter != vectPtrsExpenses.end()) // распечатываем всех жильцов
        {
        cout << setw(15) << (*iter)->GetCategory()
          << setw(15) << (*iter)->GetName()
          << setw(15) << (*iter)->GetDate()
          << setw(15) << (*iter)->GetAmount() << endl;
        *iter++;
        }
    }
}

float ExpenseList::DisplaySummExpenses() // сумма всех платежей
{
    float summExpenses = 0.0;
    iter = vectPtrsExpenses.begin();
    while (iter != vectPtrsExpenses.end())
    { // плюсуем суммы всех платежей жильцов за все время
        summExpenses += (*iter)->GetAmount();
        iter++;
    }
    return summExpenses;
}
