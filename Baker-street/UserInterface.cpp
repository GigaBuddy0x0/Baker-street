#include "UserInterface.h"

UserInterface::UserInterface()
{
    ptrProduceList = new ProduceList;
    ptrProfitList = new ProfitList;
    ptrExpenseList = new ExpenseList;
}

UserInterface::~UserInterface()
{
    delete ptrProduceList;
    delete ptrProfitList;
    delete ptrExpenseList;
}

void UserInterface::interact()
{
    while (true)
    {
        cout << "To enter data press 'i', \n"
             << " to display the report 'd', \n"
             << " to exit 'q': \n";
        char ch;
        cin >> ch;
        if (ch == 'i') // input data
        {
            cout << " press 't' to add products, \n"
                 << " press 'r' to record income, \n"
                 << " press 'e' to record expenses: \n";
            cin >> ch;
            switch (ch)
            {
                // input screens only exist during their use
            case 't': cout << "Function is under development. Please come back later!" << endl;
                break;
            case 'r': cout << "Function is under development. Please come back later!" << endl;
                break;
            case 'e': cout << "Function is under development. Please come back later!" << endl;
                break;
            default: cout << "Unknown function\n";
                break;
            } // end of switch section
        } // end of if condition

        else if (ch == 'd') // output data
        {
            cout << "Press 't' to display the list of products, \n"
                 << " press 'r' to display income, \n"
                 << " press 'e' to display expenses, \n"
                 << " press 'a' to display the annual report: \n";
            cin >> ch;
            switch (ch)
            {
            case 't': cout << "Function is under development. Please come back later!" << endl;
                break;
            case 'r': cout << "Function is under development. Please come back later!" << endl;
                break;
            case 'e': cout << "Function is under development. Please come back later!" << endl;
                break;
            case 'a': cout << "Function is under development. Please come back later!" << endl;
            default: cout << "Unknown display function\n";
                break;
            } // end switch
        } // end elseif
        else if (ch == 'q') {
            system("pause");
            return; // exit
        }
        else
            cout << "Unknown function. Press only 'i', 'd', or 'q'\n";
    } // end while
}
