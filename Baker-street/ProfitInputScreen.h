#ifndef PROFITINPUTSCREEN
#define PROFITINPUTSCREEN

#include "ProfitList.h"
class ProfitInputScreen
{
private;
    ProfitList* ptrProfitList;
    string ProfitName;
    int Profitquantity;
    double Profitglobalcost;
    string Profitdate;
public:
        ProfitInputScreen(ProfitLis* ptrPrfL) : ptrProfitLis(ptrPrfL)
        {
        /* тут пусто */
        }
        void setProfit(); // добавить данные о жильце
};

#endif // PROFITINPUTSCREEN

