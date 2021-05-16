#include <bits/stdc++.h>
using namespace std;

bool valid(const int &mid, const int &x)
{
    return (x>=mid)? 1: 0;
}


bool binarySearch(const int &x, const vector<int> v)
{
    int n = v.size();
    int lo=0, mid, hi=n-1;

    while(lo<hi)
    {
        mid = (lo+hi+1)/2;
        (valid(v[mid], x))? lo = mid : hi = mid-1;
    }
    return (v[lo]==x)? 1: 0;
}

int main(void)
{
    int n, k;
    cin >> n >> k;

    vector<int> s1(n);
    vector<int> s2(k);

    for(int i=0; i<n; i++)
        cin >> s1[i];

    for(int i=0; i<n; i++)
        cin >> s2[i];

    for(int i=0; i<k; i++)
        (binarySearch(s2[i], s1)) ? cout<<"YES\n" : cout<<"NO\n";


    return 0;
}