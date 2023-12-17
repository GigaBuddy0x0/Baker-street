#ifndef PROFITINPUTSCREEN
#define PROFITINPUTSCREEN

#include "ProfitList.h"
class ProfitInputScreen
{
private:
    ProfitList* ptrProfitList;
    string ProfitName;
    int ProfitQuantity;
    double ProfitGlobalCost;
    string ProfitDate;
public:
    ProfitInputScreen(ProfitList* ptrPrfL) : ptrProfitList(ptrPrfL)
        {
        /* тут пусто */
        }
    void setProfit(); // добавить данные о доходе
};

#endif // PROFITINPUTSCREEN

