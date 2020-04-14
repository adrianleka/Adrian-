// HW2_q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
     int dimes, quarters, nickels, pennies;

    cout << "Please enter number of coins:\n";
    cout << "number of Quarter: ";
    cin >> quarters;
    cout << "number of Dimes: ";
    cin >> dimes;
    cout << "number of Nickels: ";
    cin >> nickels;
    cout << "number of Pennies: ";
    cin >> pennies;

    //convert into cents
    int cents = 25 * quarters + 10 * dimes + 5 * nickels + pennies;
    //convert into dollars
    int dollar = cents / 100;
    //remained cents
    cents = cents % 100;

    cout << "The total is " << dollar << " dollars and " << cents << " cents\n";
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
