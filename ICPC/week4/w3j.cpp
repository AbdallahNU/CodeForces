#include <iostream>
using namespace std;

unsigned long long n, lo=0, mid,  hi=10e18, k, f=0;

bool valid(const long &mid)
{
    // long long before = mid*(mid+1)/2;
    long long after = n*(n+1)/2 - (mid-1)*(mid)/2;
    if(after<=n) return false;
    return true;
}

long bs()
{
    while(lo<hi)
    {
        mid = (lo+hi+1)/2;
        (valid(mid))? lo=mid : hi=mid-1;
    }
    return lo;
}

int main(void)
{
    cin >> n >>k;

    if(n==1)
        cout << 0;
    else if(n<=k)
        cout << 1;
    else if((k-1)*k/2 < (n-1))
        cout << -1;
    else
    {
        cout << bs() << endl;
    }
    

    return 0;
}