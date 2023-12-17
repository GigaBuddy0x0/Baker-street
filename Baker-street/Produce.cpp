#include "Produce.h"

Produce::Produce(string s, int i, double d): name(s), id(i), cost(d)
{ }

Produce::~Produce() // деструктор
{ }

string Produce::GetName()
{
    return name;
}

int Produce::GetId()
{
    return id;
}

double Produce::GetCost()
{
    return cost;
}
