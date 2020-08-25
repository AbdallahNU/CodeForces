#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a[4], max=0;

    for(int i=0; i<4; i++)
    {
        cin >> a[i];
        if(a[i]>max)
            max = a[i];
    }

    for(int i=0; i<4; i++)
    {
        if(max-a[i]!=0)
            cout << max-a[i] << " ";
    }

    return 0;
}