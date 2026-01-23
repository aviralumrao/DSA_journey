//Write a program to check if you are an adult or not
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Input your age : ";
    cin >> age;
    
    if(age >=18)
    {
        cout << "You're an adult";
    }
    else{
        cout << "You're not an adult";
    }
    return 0;
}

/*
OUTPUT
Input your age : 45
You're an adult
*/