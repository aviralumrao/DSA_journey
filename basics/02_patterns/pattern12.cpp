// Pattern - 12: Number Crown Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<< j;
        }
        for(j=1;j<=2*n-2*i;j++){
            cout <<" ";
        }
        for(j=i;j>=1;j--){
            cout << j;
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
