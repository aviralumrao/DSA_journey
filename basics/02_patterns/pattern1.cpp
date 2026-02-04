/* Given an integer N, print the following pattern.
 *   *   *   *
 *   *   *   *
 *   *   *   *
 *   *   *   *
 */

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i, j;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            cout << "*\t";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "Input an Integer N : ";
    cin >> t;
    print(t);
    return 0;
}