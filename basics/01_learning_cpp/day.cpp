#include <bits/stdc++.h>
using namespace std;
/*
Take the day no and print the corresponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/
int main()
{
    int n;
    cout << "input the number : ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    default:
    cout << "Invalid Input";
        break;
    }
    return 0;
}

/*  OUTPUT
input the number : 4
Thursday

input the number : 45
Invalid Input
*/
