#include "Profit.h"

Profit::~Profit() // деструктор
{ }

Profit::Profit(string n, int q, double g, string d): name(n), quantity(q), globalcost(g), date(d)
{ }

string Profit::GetName()
{
    return name;
}

int Profit::GetQuantity()
{
    return quantity;
}

double Profit::GetGlobalcost()
{
    return globalcost;
}

string Profit::GetDate()
{
    return date;
}

