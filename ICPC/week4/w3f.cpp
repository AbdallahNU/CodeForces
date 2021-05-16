#include <bits/stdc++.h>
using namespace std;

int lo=0, hi, mid, n, s, sum, tsum;
vector<int> a;

bool canBuy(const int &mid)
{
    sum=0;
    vector<int> res(n);
    for(int i=0; i<n; i++)
        res[i] = a[i]+mid*(i+1);

    sort(res.begin(), res.end());

    for(int i=0; i<mid; i++)
    {
        if(sum+res[i]<=s)
            sum+=res[i];
        else
            return false;
    }
    tsum = sum;
    return true;
}

int bs()
{
    while (lo < hi)
    {
        mid = (lo+hi+1)/2;
        (canBuy(mid))? lo=mid : hi=mid-1;
    }
    return lo;
}


int main(void)
{
    cin >> n >> s;
    hi=n;

    a.reserve(n);

    for(int i=0; i<n; i++)
        cin >> a[i];

    
    cout << bs() << " " << tsum << endl;

    return 0;
}