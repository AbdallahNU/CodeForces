#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, small, large, count=0;
    cin >>n;

    int x=0;

    cin >>x;
    small = large = x;

    for(int i=0; i<n-1; i++)
    {
        cin >>x;
        if(x<small)
        {
            small = x;
            count++;
        }
        else if(x>large)
        {
            large = x;
            count++;
        }
    }

    cout << count;

    return 0;
}