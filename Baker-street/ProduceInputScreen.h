#ifndef PRODUCEINPUTSCREEN
#define PRODUCEINPUTSCREEN

#include "ProduceList.h"

class ProduceInputScreen
{
private:
    ProduceList* ptrProduceList;
    string PrName;
    int PrId;
    double PrCost;
public:
    ProduceInputScreen(ProduceList* ptrPL) : ptrProduceList(ptrPL)
    {
    /* тут пусто */
    }
    void setProduce(); // добавить данные о жильце
};

#endif // PRODUCEINPUTSCREEN

