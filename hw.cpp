#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

namespace lms
{
    void start()
    {
        cout << "Welcome to LMS system\n"
             << "---------------------\n"
             << "Press any key to start!\n";
    }

    bool login()
    {
        string username = "librarian";
        string password = "pw123";
        string user = "";
        cout << "Username: ";
        cin >> user;
        char ch;
        cout << "Password: ";
        ch = _getch();
        string passwd = "";
        while (ch != 13)
        {
            passwd.push_back(ch);
            cout << "*";
            ch = _getch();
        }
        if (username == user && password == passwd)
            return true;
        else
            return false;
    }

    void menu()
    {
        cout << "\nLMS Menu\n"
             << "1. Loan a book\n"
             << "2. Add book record\n"
             << "3. Update book record\n"
             << "4. Search for a book\n"
             << "0. Exit\n\n";
    }

    void submenu(int y)
    {

        switch (y)
        {
        case 1:
            cout << "'1. Loan a book' selected\n";
            break;
        case 2:
            cout << "'2. Add book record' selected\n";
            break;
        case 3:
            cout << "'3. Update book record' selected\n";
            break;
        case 4:
            cout << "'4. Search for a book' selected\n";
            break;
        case 0:
            cout << "'0. Exit' selected\n";
            break;

        default:
            cout << "Invalid Number Please Try Again\n";
            break;
        }
    }
}
