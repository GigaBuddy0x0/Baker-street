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
float expenses, profit; // суммы доходов и расходов
public:
AnnualReport(ProfitList*, ExpenseList*);
void display(); // отображение годового отчета
};
#endif // ANNUALREPORT

