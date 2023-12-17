#include "ProfitInputScreen.h"

void ProfitInputScreen::setProfit() // добавить данные о доходе
{
    cout << "Input the name of profit: " << endl;
    getaLine(ProfitName);

    cout << "Input the quantity of profit: " << endl;
    cin >> ProfitQuantity;
    cin.ignore(80, '\n');

    cout << "Input the cost of profit: " << endl;
    cin >> ProfitGlobalCost;
    cin.ignore(80, '\n');

    cout << "Input the date of profit: " << endl;
    cin >> ProfitDate;
    cin.ignore(80, '\n');

    Profit* ptrProfit = new Profit(ProfitName, ProfitQuantity, ProfitGlobalCost, ProfitDate); // создать доход
    ptrProfitList->InsertProfit(ptrProfit); // занести в список доходов
}
