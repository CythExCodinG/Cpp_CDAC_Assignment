#include "BankingService.h"
#include "Account.h"
#include "Current.h"
#include "Demat.h"
#include "Savings.h"
#include "Share.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

BankingService::BankingService()
{
    accountCount = 0;
    for (int i = 0; i < 100; i++)
    {
        accounts[i] = nullptr;
    }
}

BankingService::~BankingService()
{
    for (int i = 0; i < accountCount; i++)
    {
        delete accounts[i];
        accounts[i] = nullptr;
    }
}

void BankingService::addAccount()
{
    int type;
    cout << "Enter type of account (1. Current, 2. Demat, 3. Savings): ";
    cin >> type;

    int id;
    char *fname = nullptr;
    char *lname = nullptr;
    char *mobile = nullptr;
    char *email = nullptr;
    int pin;

    string Fname, Lname, Mobile, Email;

    if (type == 1)
    {
        int trans;
        cout << "Enter no of transactions: ";
        cin >> trans;
        cout << "Enter id: ";
        cin >> id;

        cout << "Enter first name: ";
        cin >> Fname;

        fname = new char[Fname.length() + 1];
        strcpy(fname, Fname.c_str());

        cout << "Enter last name: ";
        cin >> Lname;
        lname = new char[Lname.length() + 1];
        strcpy(lname, Lname.c_str());

        cout << "Enter mobile: ";
        cin >> Mobile;
        mobile = new char[Mobile.length() + 1];
        strcpy(mobile, Mobile.c_str());

        cout << "Enter email: ";
        cin >> Email;
        email = new char[Email.length() + 1];
        strcpy(email, Email.c_str());

        cout << "Enter pin: ";
        cin >> pin;


        
        accounts[accountCount] = new Current(trans, fname, id, lname, mobile, email, pin);
        accountCount++;

        delete[] fname;
        delete[] lname;
        delete[] mobile;
        delete[] email;

        cout << "Account added successfully" << endl;
    }
    else if (type == 2)
    {
        cout << "Enter id: ";
        cin >> id;

        cout << "Enter first name: ";
        cin >> Fname;

        fname = new char[Fname.length() + 1];
        strcpy(fname, Fname.c_str());

        cout << "Enter last name: ";
        cin >> Lname;
        lname = new char[Lname.length() + 1];
        strcpy(lname, Lname.c_str());

        cout << "Enter mobile: ";
        cin >> Mobile;
        mobile = new char[Mobile.length() + 1];
        strcpy(mobile, Mobile.c_str());

        cout << "Enter email: ";
        cin >> Email;
        email = new char[Email.length() + 1];
        strcpy(email, Email.c_str());

        cout << "Enter pin: ";
        cin >> pin;

        Demat *demat = new Demat(id, fname, lname, email, mobile, pin);
        accounts[accountCount++] = demat;
        addShareToDemat(demat);

        delete[] fname;
        delete[] lname;
        delete[] mobile;
        delete[] email;
    }
    else if (type == 3)
    {

        cout << "Enter id: ";
        cin >> id;

        cout << "Enter first name: ";
        cin >> Fname;

        fname = new char[Fname.length() + 1];
        strcpy(fname, Fname.c_str());

        cout << "Enter last name: ";
        cin >> Lname;
        lname = new char[Lname.length() + 1];
        strcpy(lname, Lname.c_str());

        cout << "Enter mobile: ";
        cin >> Mobile;
        mobile = new char[Mobile.length() + 1];
        strcpy(mobile, Mobile.c_str());

        cout << "Enter email: ";
        cin >> Email;
        email = new char[Email.length() + 1];
        strcpy(email, Email.c_str());

        cout << "Enter pin: ";
        cin >> pin;

        accounts[accountCount++] = new Saving(id, fname, id, lname, mobile, email, pin);

        delete[] fname;
        delete[] lname;
        delete[] mobile;
        delete[] email;
    }
}
void BankingService::display()
{
    for (int i = 0; i < accountCount; i++)
    {
        accounts[i]->display();
        cout << "------------------------" << endl;
    }
}
int BankingService::findAccount()
{
    int id;
    cout << "Enter account ID to find: ";
    cin >> id;
    for (int i = 0; i < accountCount; i++)
    {
        if (accounts[i]->getId() == id)
        {
            return i;
        }
    }
    return -1;
}
void BankingService::displayAccount()
{
    int id;
    cout << "Enter account ID to display: ";
    cin >> id;
    int index = findAccount();
    if (index != -1)
    {
        accounts[index]->display();
    }
    else
    {
        cout << "Account not found!" << endl;
    }
}

void BankingService::addShareToDemat(Account *a)
{
    Demat *demat = dynamic_cast<Demat *>(a);
    int count;
    cout << "Enter no of Shares :";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        string name, pDate, sDate;
        int qty;
        double buyPrice, sellPrice;

        cout << "\n--- Share " << (i + 1) << " ---" << endl;
        cout << "Share Name: ";
        cin >> name;
        cout << "Quantity: ";
        cin >> qty;
        cout << "Buying Price: ";
        cin >> buyPrice;
        cout << "Purchase Date (DD/MM/YYYY): ";
        cin >> pDate;
        cout << "Selling Price: ";
        cin >> sellPrice;
        cout << "Selling Date (DD/MM/YYYY): ";
        cin >> sDate;

        Share s(const_cast<char *>(name.c_str()), qty, buyPrice, const_cast<char *>(pDate.c_str()), sellPrice, const_cast<char *>(sDate.c_str()));
        demat->addShare(s);
    }
}