#include "BankingService.h"
#include <iostream>

using namespace std;

int main()
{
    int choice = 0;
    BankingService bs;

    do
    {
        cout << "\n--- Menu ---" << endl
             << "1. Add account" << endl
             << "2. Display Account" << endl
             << "3. Close Account" << endl
             << "4. Account Counts" << endl
             << "5. Withdraw" << endl
             << "6. Deposit Amount" << endl
             << "7. Set PIN" << endl
             << "8. Exit" << endl
             << "Enter choice: ";
        
        cin >> choice; // Fixed missing input statement

        switch (choice)
        {
        case 1:
            bs.addAccount();
            break;
        case 2:
            bs.displayAccount();
            break;
        case 3:
            bs.addAccount();
            break;
        case 8:
            cout << "Exiting application..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    } while (choice != 8);

    return 0;
}