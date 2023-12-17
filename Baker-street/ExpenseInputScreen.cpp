#include "ExpenseInputScreen.h"

void ExpenseInputScreen::SetExpense() // добавить данные о расходе
{
    cout << "Input the category of expense: " << endl;
    getaLine(ExpenseCategory);

    cout << "Input the name of expense: " << endl;
    getaLine(ExpenseName);

    cout << "Input the date of expense: " << endl;
    getaLine(ExpenseDate);

    cout << "Input the amount of expense: " << endl;
    cin >> ExpenseAmount;
    cin.ignore(80, '\n');

    Expense* ptrExpense = new Expense (ExpenseCategory, ExpenseName, ExpenseDate, ExpenseAmount); // создать расход

    ptrExpenseList->InsertExpense(ptrExpense); // занести в список расходов
}
