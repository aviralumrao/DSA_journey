//Pattern - 21: Hollow Rectangle Pattern
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        cout << "*";
    }
    cout << endl;
    for(i=0;i<n-2;i++)
    {
        cout << "*";
        for(j=0;j<n-2;j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for(i=0;i<n;i++)
    {
        cout << "*";
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
*****
*   *
*   *
*   *
*****
*/