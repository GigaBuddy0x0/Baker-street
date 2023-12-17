#include "ProduceList.h"

ProduceList::~ProduceList() // деструктор
{   // удалить строки с продукцией,
    // удалить указатели из списка.
    while (!setPtrsProds.empty())
    {
        iter = setPtrsProds.begin();
        delete *iter;
        setPtrsProds.erase(iter);
    }
}
