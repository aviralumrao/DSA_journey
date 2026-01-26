/* Given an integer N, print the following pattern.
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cout << "Input an Integer N : ";
    cin >> n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout << "*\t";
        }
        cout << endl;
    }
    return 0;
}