#ifndef PROFIT
#define PROFIT

#include "libs.h"
class Profit
{
private:
    string name;
    int quantity;
    double globalcost;
    string date;
public:
        Profit(string, int, double,string);
        ~Profit();
        string GetName();
        int GetQuantity();
        double GetGlobalcost();
        string GetDate();
};
#endif // PROFIT

