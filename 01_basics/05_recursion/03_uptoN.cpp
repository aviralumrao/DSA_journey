// Given an integer N, write a program to print numbers from 1 to N using recursion.
#include <bits/stdc++.h>
using namespace std;

void printN(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    printN(i + 1, n);
}

int main()
{
    int N;
    cout << "Input a nunber :";
    cin >> N;
    printN(1,N);
}