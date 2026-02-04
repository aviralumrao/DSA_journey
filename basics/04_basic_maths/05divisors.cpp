//Given an integer N, return all divisors of N.

#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){
    vector<int>v;
    for (int i=1;i<=n;i++){
        if(n%i ==0)
            v.push_back(i);
    }
    return v;
}

int main()
{
    int N;
    cout << "Input the number : ";
    cin >> N;

    vector<int>v = divisors(N);
    cout << "The divisors are : ";
    for(auto it = v.begin(); it!=v.end();it++){
        cout << *(it) << " ";
    }
}

/*OUTPUT
Input the number : 45
The divisors are : 1 3 5 9 15 45 
*/