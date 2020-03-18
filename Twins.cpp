#include <iostream>

using namespace std;

int main(void)
{
    int n, total=0, me=0, coins=0;
    cin >>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        total +=arr[i];
    }
    
    while (true)
    {
        int swapped =0;

        for(int i=0; i<n-1; i++)
        {
            if(arr[i]<arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                swapped =1;
            }
        }
        if (swapped ==0)
            break;
    }

    for(int i=0; i<n; i++)
    {
        me += arr[i];
        coins ++;
        if (me>(double)total/2)
        {
            cout << coins;
            break;
        }
    }
    return 0;
}