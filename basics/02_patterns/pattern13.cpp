//Pattern - 13: Increasing Number Triangle Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i,j,k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<< k << " ";
            k++;
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
