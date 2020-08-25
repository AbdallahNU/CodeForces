#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m, days=0;

    cin >>n >>m;

    while(n>0)
    {
        n--;
        days++;
        if(days%m==0)
            n++;
    }

    cout << days;

    return 0;   
}