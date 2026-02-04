// Pattern - 11: Binary Number Triangle Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int a, b, t;
    for (int i = 1; i <= n; i++)
    {
        (i % 2 == 0) ? a = 0 : a = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a = 1 - a;
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
