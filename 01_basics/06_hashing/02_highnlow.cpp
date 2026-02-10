// Given an array of size N. Find the highest and lowest frequency element.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "intput size = ";
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    cout << "input array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // printing frequency
    cout << "Frequency" << endl;
    int high = arr[0];
    int low = arr[0];
    for (auto it : mpp)
    {
        if (it.second > mpp[high])
            high = it.first;
        if (it.second < mpp[low])
            low = it.first;
    }

    cout << "highest = " << high << endl;
    cout << "lowest = " << low << endl;
}