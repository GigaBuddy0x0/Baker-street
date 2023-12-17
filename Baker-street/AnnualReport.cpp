#include "AnnualReport.h"

#include "AnnualReport.h"

void AnnualReport::display()
{
    cout << setw(20) << "Annual report" << endl;
    cout << "----------------------------" << endl;
    cout << "Incomes\n" << endl;
    cout << "Bakery sells:\t\t";
    profits = ptrPL->DisplaySummProfits();
    cout << profits << endl << endl;
    cout << "Expenses\n\n";
    expenses = ptrEL->DisplaySummExpenses();
    cout << "Total expense:\t\t";
    cout << expenses << endl << endl;
    // вычисляем прибыльность
    cout << "\nProfit:\t\t\t" << (profits - expenses) << endl;
}
