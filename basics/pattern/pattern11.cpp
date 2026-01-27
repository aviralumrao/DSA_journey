// Pattern - 11: Binary Number Triangle Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int a, b, t;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            a = 0;
            b = 1;
        }
        else
        {
            a = 1;
            b = 0;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            t = a;
            a = b;
            b = t;
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "Input an Integer N = ";
    cin >> t;
    print(t);
    return 0;
}
