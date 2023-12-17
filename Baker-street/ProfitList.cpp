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

