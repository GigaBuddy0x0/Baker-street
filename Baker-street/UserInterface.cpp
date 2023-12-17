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
    char ch;
    while (true)
    {
        cout << "To enter data press 'e', \n"
             << " to display the report 'd', \n"
             << " to exit 'q': \n";
        ch = getaChar();
        if (ch == 'e') // enter data
        {
            cout << " press 'p' to add products, \n"
                 << " press 'i' to record income, \n"
                 << " press 'e' to record expenses: \n";
            ch = getaChar();
            switch (ch)
            {
                // input screens only exist during their use
            case 'p':
                ptrProduceInputScreen = new ProduceInputScreen(ptrProduceList);
                ptrProduceInputScreen->setProduce();
                delete ptrProduceInputScreen;
                break;
            case 'i':
                ptrProfitInputScreen = new ProfitInputScreen(ptrProfitList);
                ptrProfitInputScreen->setProfit();
                delete ptrProfitInputScreen;
                break;
            case 'e':
                ptrExpenseInputScreen = new ExpenseInputScreen(ptrExpenseList);
                ptrExpenseInputScreen->SetExpense();
                delete ptrExpenseInputScreen;
                break;
            default: cout << "Unknown function\n";
                break;
            } // end of switch section
        } // end of if condition

        else if (ch == 'd') // output data
        {
            cout << "Press 'l' to display the list of products, \n"
                 << " press 'i' to display income, \n"
                 << " press 'e' to display expenses, \n"
                 << " press 'a' to display the annual report: \n";
            ch = getaChar();
            switch (ch)
            {
            case 'l': ptrProduceList->DisplayProd();
                break;
            case 'i': ptrProfitList->DisplayProf();
                break;
            case 'e': ptrExpenseList->DisplayExp();
                break;
            case 'a':
                ptrAnnualReport = new AnnualReport(ptrProfitList, ptrExpenseList);
                ptrAnnualReport->display();
                delete ptrAnnualReport;
            default: cout << "Unknown display function\n";
                break;
            } // end switch
        } // end elseif
        else if (ch == 'q') {
            return; // exit
        }
        else
            cout << "Unknown function. Press only 'e', 'd', or 'q'\n";
    } // end while
}
