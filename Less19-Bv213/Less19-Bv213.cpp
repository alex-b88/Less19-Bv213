// Less19-Bv213.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Department.h"
#include "Employee.h"
#include "Outstaff.h"
#include "Staff.h"
int main()
{
    Department itstep;
    itstep.addItem(new Staff("Ivan", "Manager", 13000, 3000));
    itstep.addItem(new Staff("Oleg", "Counter", 19000, 9000));
    itstep.addItem(new Outstaff("Petr", "Cleaner",6000));
    itstep.show();

 //   std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
