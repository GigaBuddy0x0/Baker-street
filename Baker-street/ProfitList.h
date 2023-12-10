#ifndef PROFITLIST
#define PROFITLIST

#include "Profit.h"

class ProfitList {
private:
    // установить указатели на доход
    list <Profit*> setPtrsProfits; // указатели на класс дохода
    list <Profit*>::iterator iter; //итератор
public:
    ~ProfitList(); // деструктор (удаление дохода из списка)
    void insertProfit(Profit*); // добавить доход в список
    int GetQuantityProfit(string);
    double GetGlobalcostProfit(string);
    string GetDateProfit(string);
    void DisplaySummProfits(); // вывод списка доходов
    void DisplayProf();
};
#endif // PROFITLIST

