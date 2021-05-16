#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    short n;
    cin >> n;

    short arr[n];

    for(short i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);
    swap(arr[0], arr[n-1]);

    for(short i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}