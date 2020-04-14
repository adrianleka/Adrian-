// HW@2_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
      int dollars, cents;

    cout << "Please enter your amount in format of dollars and cents seperated by space:\n";
    cin >> dollars >> cents;

    int pennies = 100 * dollars + cents;
    int quarter = pennies / 25;
    pennies = pennies % 25;

    int dimes = pennies / 10;
    pennies = pennies % 10;

    int nickels = pennies / 5;
    pennies = pennies % 5;

    cout << quarter << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies\n";
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
