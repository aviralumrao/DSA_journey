/* Take the age from the user and then decide accordingly
1. If age < 18,
print-> not eligible for job
2. If age >= 18,
print-> "eligible for job"
3. If age >= 55 and age <= 57,
print-> "eligible for job, but retirement soon."
4. If age > 57
print-> "retirement time"*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Input your age : ";
    cin >> age;

    if( age <  18){
        cout << "Not eligible for job";
    }
    else if(age<58){
        cout << "Eligible for job";
        if(age>54){
            cout << ", but retirement soon";
        }
    }
    else{
        cout << "retirement time";
    }
    return 0;
}

/*OUTPUT
Input your age : 
14
Not eligible for job

Iput your age : 45
Eligible for job

Input your age : 56
Eligible for job, but retirement soon

Input your age : 60
retirement time
*/