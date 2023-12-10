#ifndef PROFITINPUTSCREEN
#define PROFITINPUTSCREEN

#include "ProfitList.h"
class ProfitInputScreen
{
private:
    ProfitList* ptrProfitList;
    string ProfitName;
    int ProfitQuantity;
    double ProfitGlobalcost;
    string ProfitDate;
public:
    ProfitInputScreen(ProfitLis* ptrPrfL) : ptrProfitLis(ptrPrfL)
        {
        /* тут пусто */
        }
    void setProfit(); // добавить данные о доходе
};

#endif // PROFITINPUTSCREEN

