#include <bits/stdc++.h>

using namespace std;
long long n, k, lo=0, hi=2000000000, mid, x;
vector<long long> a, b;

bool canBake(const long long &mid)
{
    long long magic=k;

    for(int i=0; i<n; i++)
    {
        if(a[i]*mid <= b[i])
            continue;
        else
        {
            if(b[i]+magic >= a[i]*mid)
                magic-= a[i]*mid-b[i];
            else
                return false;
        }
    }
    return true;
}

long long bs()
{
    while (lo < hi)
    {
        mid = (lo+hi+1)/2;
        (canBake(mid))? lo=mid: hi=mid-1;
    }
    return lo;
}

int main(void)
{
    cin >> n >>k;
    a.reserve(n); b.reserve(n);


    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)
        cin >> b[i];


    cout << bs();

    return 0;   
}