#ifndef PROFITLIST
#define PROFITLIST

#include "Profit.h"

class ProfitList {
private:
    // установить указатели на продукцию
    list <Profit*> setPtrsProfits; // указатели на класс продукция
    list <Profit*>::iterator iter; //итератор
public:
    ~ProfitList(); // деструктор (удаление продукции из списка)
    void insertProfit(Profit*); // добавить продукцию в список
    int GetQuantityProfit(string);
    double GetGlobalcostProfit(string);
    string GetDateProfit(string);
    void display(); // вывод списка продукции
};
#endif // PROFITLIST

