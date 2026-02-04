/*Pattern-5:  Inverted Star Pyramid
     *******
      *****
       ***
        *
 */
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i, j, k;
    for (i = n; i >= 1; i--)
    {
        for (k = 1; k <= n-i; k++)
        {
            cout << " ";
        }

        for (j = 1; j< 2*i; j++)
        {
            cout << "*";
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
