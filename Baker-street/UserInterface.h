#ifndef USERINTERFACE
#define USERINTERFACE
//////////////////Класс UserInterface//////////////////////
//Главный класс для запуска приложения:
//этот класс определяет взаимодействие юзера с программой.
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
char ch;
public:
UserInterface();
~UserInterface();
void interact();
}; // конец класса userInterfac
//////////////////конец файла landlord.h//////////////////
#endif // USERINTERFACE

