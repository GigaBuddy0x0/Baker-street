#ifndef PRODUCE
#define PRODUCE

#include <iostream>
using namespace std;

Class Produce
{
private:
    string name;
    int id;
    double cost;
public:
    Produce(string, int, double);
    ~Produce();
    string GetName();
    int GetId();
    double GetCost();
};

#endif // PRODUCE

