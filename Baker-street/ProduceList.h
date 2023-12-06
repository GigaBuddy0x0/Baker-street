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
    void insertProduce(Produce*); // добавить продукцию в список
    int getIdPr(string); // возвращают id и стоимость записи по имени позиции
    double getCostPr(string);
    void display(); // вывод списка продукции
};

#endif // PRODUCELIST

