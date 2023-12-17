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
void ProduceList::InsertProduce(Produce* ptrPr) // добавить продукцию в список
{
    setPtrsProds.push_back(ptrPr); // вставка новой продукции в список
}

//void ProduceList::DeletProduce(Produce* ptrPr) // удалить продукцию из списка

double ProduceList::GetCostProduce(string name) // получить стоимость товара по его имени
{
    int cost;
    iter = setPtrsProds.begin();
    while (iter != setPtrsProds.end())
    {
        cost = (*iter)->GetCost();
        if (name == ((*iter)->GetName())) // сравниваем по именам и
        {   // если получившаяся пара совпадает - значит,
            //мы нашли запись об этом товаре в списке, в этом случае
            return cost; // возвращаем его стоимость
        }
        iter++;
    }
    return -1; // если нет - возвращаем -1
}

void ProduceList::DisplayProd() // вывод списка товаров
{
    cout << endl;
    cout << setw(15) << "Id" << setw(15) << "Name" << setw(15) << "Cost";
    cout << endl << "--------------------------------------------------------------" << endl;
    if (setPtrsProds.empty()) // если список товаров пуст
    cout << "***There's nothing here***\n" << endl; // выводим запись, что он пуст)
    else
    {
        iter = setPtrsProds.begin();
        while (iter != setPtrsProds.end()) // распечатываем все товары
        {
        cout << setw(15) << (*iter)->GetId()
          << setw(15) << (*iter)->GetName()
          << setw(15) << (*iter)->GetCost() << endl;
        *iter++;
        }
    }
}
