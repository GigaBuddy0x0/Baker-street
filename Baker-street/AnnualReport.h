#ifndef ANNUALREPORT
#define ANNUALREPORT
//////////////////класс AnnualReport///////////////////////
//Класс годового отчета

#include "ProfitList.h"
#include "ExpenseList.h"

class AnnualReport
{
private:
ProfitList* ptrPL; // записи доходов
ExpenseList* ptrEL; // записи расходов
float expenses, profits; // суммы доходов и расходов
public:
AnnualReport(ProfitList* pPL, ExpenseList* pEL): ptrPL(pPL), ptrEL(pEL)
{ }
void display(); // отображение годового отчета
};
#endif // ANNUALREPORT

