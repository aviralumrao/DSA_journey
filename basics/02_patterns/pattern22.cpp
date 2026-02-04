// Pattern - 22: The Number Pattern
#include <bits/stdc++.h>
using namespace std;

int print(int n)
{
    int i,j,t=n;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout << t--;
        }
        for(j=0;j<(2*t-1);j++){
            cout << t;
        }
        for(j=0;j<i;j++){
            cout << ++t;
        }
        cout << endl;
    }
    t = n;
    for(i=1;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout << t--;
        }
        for(j=0;j<(2*t-1);j++){
            cout << t;
        }
        
        for(j=0;j<n-i-1;j++){
            cout << ++t;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Input an Integer N = ";
    cin >> n;
    print(n);
    return 0;
}

/*
OUTPUT
Input an Integer N = 5
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/