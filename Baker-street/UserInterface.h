#ifndef USERINTERFACE
#define USERINTERFACE

//////////////////Класс UserInterface//////////////////////
//Главный класс для запуска приложения:
//этот класс определяет взаимодействие юзера с программой.
#include "ProduceInputScreen.h"
#include "ProfitInputScreen.h"
#include "ExpenseInputScreen.h"
#include "AnnualReport.h"

class UserInterface
{
private:
    ProduceList* ptrProduceList;
    ProduceInputScreen* ptrProduceInputScreen;
    ProfitList* ptrProfitList;
    ProfitInputScreen* ptrProfitInputScreen;
    ExpenseList* ptrExpenseList;
    ExpenseInputScreen* ptrExpenseInputScreen;
    AnnualReport* ptrAnnualReport;
public:
    UserInterface();
    ~UserInterface();
    void interact();
};

#endif // USERINTERFACE

