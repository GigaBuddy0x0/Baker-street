#ifndef PRODUCEINPUTSCREEN
#define PRODUCEINPUTSCREEN

#include "ProduceList.h"

class ProduceInputScreen
{
private:
    ProduceList* ptrProduceList;
    string ProduceName;
    int ProduceId;
    double ProduceCost;
public:
    ProduceInputScreen(ProduceList* ptrPL) : ptrProduceList(ptrPL)
    { }
    void setProduce(); // добавить данные о продукции
};

#endif // PRODUCEINPUTSCREEN

