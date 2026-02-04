//Given an integer N, return true it is an Armstrong number otherwise return false.

#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int len = to_string(n).size(), cpy=n, sum=0;
    while(cpy!=0){
        int dig = cpy % 10;
        sum += (int)pow(dig, len);
        cpy /= 10;
    }
    return n==sum;
}

int main(){
    int N;
    cout << "Input the number : ";
    cin >> N;

    if(armstrong(N))
        cout << N << " is an Armstrong Number";
    else
        cout << N <<  " is not an Armstrong Number"; 
    return 0;
}