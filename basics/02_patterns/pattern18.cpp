// Pattern - 17: Inverse Alpha-Triangle Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i, j, k;
    char ch;
    for (i = 1; i <= n; i++)
    {
        ch = 'A' + (char)(n - i);
        for (j = 1; j <= i; j++)
        {
            cout << ch++;
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "Input an Integer N = ";
    cin >> t;
    if (t > 26)
    {
        cout << "N must be <= 26";
        return 0;
    }

    print(t);
    return 0;
}

/*
OUTPUT
Input an Integer N = 5
E
DE
CDE
BCDE
ABCDE
*/