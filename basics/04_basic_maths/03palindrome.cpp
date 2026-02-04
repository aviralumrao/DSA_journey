//Given an integer N, return true if it is a palindrome else return false.
#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int rev=0, temp=n;
    while(temp!=0){
        rev = rev*10 + (temp%10);
        temp=temp/10;
    }
    return rev==n;
}

int main()
{
    int N;
    cout << "Input the number : ";
    cin >> N;

    if(palindrome(N))
        cout << N << " is a Palindrome Number";
    else
        cout << N << " is not a Palindrome Number";
}

/*OUTPUT
Input the number : 12321
12321 is a Palindrome Number
*/