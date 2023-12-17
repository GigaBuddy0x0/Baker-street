#include "ProduceInputScreen.h"

void ProduceInputScreen::setProduce() // добавить данные о товаре
{
    cout << "Input the name of produce: " << endl;
    getaLine(ProduceName);

    cout << "Input the id of produce: " << endl;
    cin >> ProduceId;
    cin.ignore(80, '\n');

    cout << "Input the cost of produce: " << endl;
    cin >> ProduceCost;
    cin.ignore(80, '\n');

    Produce* ptrProduce = new Produce(ProduceName, ProduceId, ProduceCost); // занести товар в таблицу

    ptrProduceList->InsertProduce(ptrProduce); // занести в таблицу товаров
}
