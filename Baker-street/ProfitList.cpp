#include "ProfitList.h"

ProfitList::~ProfitList() // деструктор
{ // удалить строки с доходами,
    // удалить указатели из списка.
    while (!setPtrsProfits.empty())
    {
        iter = setPtrsProfits.begin();
        delete *iter;
        setPtrsProfits.erase(iter);
    }
}

void ProfitList::InsertProfit(Profit* ptrProf)
{
    setPtrsProfits.push_back(ptrProf);
}

void ProfitList::DisplayProf() // отобразить все строки с доходами
{
    cout << endl;
    cout << setw(15) << "Name" << setw(15) << "Quantity"
         << setw(15) << "Globalcost" << setw(15) << "Date";
    cout << endl << "----------------------------------------------------------------------" << endl;
    if (setPtrsProfits.empty()) // если список доходов пуст
    cout << "***There's nothing here***\n" << endl; // выводим запись, что он пуст)
    else
    {
        iter = setPtrsProfits.begin();
        while (iter != setPtrsProfits.end()) // распечатываем все доходы
        {
        cout << setw(15) << (*iter)->GetName()
          << setw(15) << (*iter)->GetQuantity()
          << setw(15) << (*iter)->GetGlobalcost()
          << setw(15) << (*iter)->GetDate() << endl;
        *iter++;
        }
    }
}

float ProfitList::DisplaySummProfits() // сумма всех доходов
{
    float sumProfits = 0.0;
    iter = setPtrsProfits.begin();
    while (iter != setPtrsProfits.end())
    { // плюсуем суммы всех доходов за все время
        sumProfits += (*iter)->GetGlobalcost();
        iter++;
    }
    return sumProfits;
}
