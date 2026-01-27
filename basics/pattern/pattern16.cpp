//Pattern - 16: Alpha-Ramp Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n){
     char ch = 'A';
    for (int i=1; i<=n; i++){ 
        for(int j=1; j<=i; j++){
            cout << ch;
        }
        cout << endl;
        ch++;
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
Input an Integer N = 6
A
BB
CCC
DDDD
EEEEE
FFFFFF
*/
