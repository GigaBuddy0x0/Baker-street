#ifndef PRODUCELIST
#define PRODUCELIST

#include "Produce.h"

class ProduceList {
private:
    // установить указатели на продукцию
    list <Produce*> setPtrsProds; // указатели на класс продукция
    list <Produce*>::iterator iter; //итератор
public:
    ~ProduceList(); // деструктор (удаление продукции из списка)
    void InsertProduce(Produce*); // добавить продукцию в список
    void RemoveProduce(Produce*); // добавить продукцию в список
    double GetCostProduce(string); // возвращают id и стоимость записи по имени позиции
    void DisplayProd(); // вывод списка продукции
};

#endif // PRODUCELIST

