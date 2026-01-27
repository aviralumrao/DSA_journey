/* Pattern-2: Right-Angled Triangle Pattern
    Given an integer N, print the following pattern : 
    *
    **
    ***
    ****
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
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
