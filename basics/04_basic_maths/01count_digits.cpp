#include <bits/stdc++.h>
using namespace std;

//Given an integer N, return the number of digits in N.
int digits(int n){
    int count =0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}

int main()
{
    int N;
    cout << "Input the number : ";
    cin >> N;

    cout << "Number of digits = " << digits(N);
    return 0;
}

/*OUTPUT
Input the number : 45862
Number of digits = 5
*/