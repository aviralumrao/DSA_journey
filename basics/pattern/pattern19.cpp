// Pattern - 19: Symmetric-Void Pattern
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    // Upper half (including middle row)
    for (int i = 0; i < n; i++)
    {
        int spaces = 2 * i;

        // Left stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        // Middle spaces
        for (int j = 0; j < spaces; j++)
            cout << " ";

        // Right stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half (excluding middle row)
    for (int i = 1; i < n; i++)
    {
        int spaces = 2 * (n - i - 1);

        // Left stars
        for (int j = 0; j <= i; j++)
            cout << "*";

        // Middle spaces
        for (int j = 0; j < spaces; j++)
            cout << " ";

        // Right stars
        for (int j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Input an Integer N = ";
    cin >> n;
    printPattern(n);
    return 0;
}


/*
OUTPUT
Input an Integer N = 5
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/