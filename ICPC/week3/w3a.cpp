#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    short n, solve=0;
    bool a,b,c;

    cin >> n;

    for(short i=0; i<n; i++)
    {
        cin >> a >> b >> c;
        if(a+b+c>1) solve++;
    }

    cout << solve;

    return 0;
}