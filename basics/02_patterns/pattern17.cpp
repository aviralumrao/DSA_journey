// Pattern - 17: Alpha-Hill Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i,j,k;
    char ch;
    for (i = 1; i <= n; i++)
    {
        for(j=1; j <= n-i; j++){
            cout << " ";
        }
        ch ='A';
        for(j=1;j<=2*i-1;j++){
            cout << ch;
            if (j < i) ch++;
            else ch--;

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
Input an Integer N = 4
   A
  ABA
 ABCBA
ABCDCBA
*/
