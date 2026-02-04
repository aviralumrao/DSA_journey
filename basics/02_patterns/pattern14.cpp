//Pattern-14: Increasing Letter Triangle Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=i; j++){
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
    print(t);
    return 0;
}

/*OUTPUT
Input an Integer N = 5
A
AB
ABC
ABCD
ABCDE
*/
