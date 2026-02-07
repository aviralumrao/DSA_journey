//  You are given an array. The task is to reverse the array and print it.
#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int l, int r)
{
    if (l >= r)
    {
        for (int i = 0; i < l + r + 1; i++)
            cout << a[i] << "\t";
        return;
    }
    // swap
    {
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;
    }
    reverse(a, l + 1, r - 1);
}
int main()
{
    int n;
    cout << "Input size o  the array : ";
    cin >> n;
    int arr[n];
    cout << "Input numbers in the array-" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl
         << "Reversed Array : ";
    reverse(arr, 0, n - 1);
}

/*OUTPUT
Input size o  the array : 5
Input numbers in the array-
45
85
96
56
25
Original Array : 45     85      96      56      25
Reversed Array : 25     56      96      85      45
*/