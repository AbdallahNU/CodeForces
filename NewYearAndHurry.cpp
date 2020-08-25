#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, k, minutes=240, num=0;

    cin >>n >>k;

    minutes-= k;

    for(int i=1; i<n+1; i++)
    {
        if( (minutes-5*i) >=0)
        {
            minutes-= 5*i;
            num++;
        }
        else
            break;
    }
    cout <<num;

    return 0;
}