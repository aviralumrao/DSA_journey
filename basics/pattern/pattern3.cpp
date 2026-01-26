/*Pattern - 3: Right-Angled Number Pyramid
    1
    12
    123
    1234
    12345
*/
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
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
