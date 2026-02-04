/*Pattern-5: Inverted Right Pyramid
    * * * * *
    * * * *
    * * *
    * *
    * 
*/
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
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
