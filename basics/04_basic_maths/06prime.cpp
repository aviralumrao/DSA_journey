// Given an integer N, check whether it is prime or not. 

#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    int count =0;
    for (int i=1;i<=n;i++){
        if(n%i ==0)
            count++;
    }
    return count==2;
}

int main()
{
    int N;
    cout << "Input the number : ";
    cin >> N;

    if(prime(N))
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";
    return 0;
}

/*OUTPUT
Input the number : 37
Prime Number
*/