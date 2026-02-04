//Given an integer N return the reverse of the given number.
#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev=0, temp=n;
    while(temp!=0){
        rev = rev*10 + (temp%10);
        temp=temp/10;
    }
    return rev;
}

int main(){
    int N;
    cout << "Input the number : ";
    cin >> N;
    cout << "Reverse = " << reverse(N);
}

/*OUTPUT
Input the number : 12543
Reverse = 34521
*/