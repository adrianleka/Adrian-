// al4473_HW2_q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int daysOfJhon, hoursOfJhon, minutesOfJhon;

    int daysOfBill, hoursOfBill, minutesOfBill;

    int totalDays, totalHours, totalMin;

    //Convert min to hour and then add the extra hour into the total hour
    int extraHour = 0;
    int extraDay = 0;

    cout << "Enter the number of days Jhon worked : ";
    cin >> daysOfJhon;
    cout << "Enter the number of hours Jhon worked : ";
    cin >> hoursOfJhon;
    cout << "Enter the number of minutes Jhon worked : ";
    cin >> minutesOfJhon;

    cout << "Enter the number of days Bill worked : ";
    cin >> daysOfBill;
    cout << "Enter the number of hours Bill worked : ";
    cin >> hoursOfBill;
    cout << "Enter the number of minutes Bill worked : ";
    cin >> minutesOfBill;

    //using if-else statement
    //if total min are greater than 60, increase the hour by 1
    if (minutesOfJhon + minutesOfBill > 60)
    {
        totalMin = (minutesOfJhon + minutesOfBill) - 60;
        extraHour = 1;

    }
    else
    {
        totalMin = minutesOfBill + minutesOfJhon;
    }

    if ((hoursOfJhon + hoursOfBill + extraHour) > 24)
    {
        totalHours = (hoursOfJhon + hoursOfBill + extraHour) - 24;
        extraDay = 1;
    }
    else
    {
        totalHours = hoursOfJhon + hoursOfBill + extraHour;

    }

    totalDays = daysOfJhon + daysOfBill + extraDay;

    cout << "The total time both of them worked together is: "
        << totalDays << " days, " << totalHours << " hours and " << totalMin << " min";

    return 0;

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
