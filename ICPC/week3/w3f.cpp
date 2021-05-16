#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k, sum=0;

    cin >> n >> k;
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int i=0;
    while(arr[i]<0 && i<n-1)
    {
        if(arr[i]<0 && k>0)
        {
            arr[i] *= -1;
            k--;
        }
        i++;
    }

    sort(arr, arr+n);
    
    if(k>0 && k%2!=0)
        arr[0]*=-1;
    
    for(int i=0; i<n; i++)
        sum+= arr[i];

    cout << sum << endl;

    return 0;
}