#include <iostream>
#include "hw.hpp"

using namespace lms;

int main()
{
    int task;
    start();
    if (login())
        while (task != 0)
        {
            menu();
            std::cout << "Select a task from the menu: ";
            std::cin >> task;
            submenu(task);
        }

    else
        std::cout << "\nFailed To Connect";
    return 0;
}
