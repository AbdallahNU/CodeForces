#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    short t, n;
    cin >> t;

    for(short i=0; i<t; i++)
    {
        short m=1001;
        cin >> n;
        short arr[n];

        for(short j=0; j<n; j++)
            cin >> arr[j];

        sort(arr, arr+n);

        for(short k=1; k<n; k++)
        {
            if(arr[k]-arr[k-1]<m)
                m= arr[k]-arr[k-1];
        }
        cout << m << endl;
    }

    return 0;
}