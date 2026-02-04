//Pattern-15: Reverse Letter Triangle Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=n-i+1; j++){
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
ABCDE
ABCD
ABC
AB
A
*/
