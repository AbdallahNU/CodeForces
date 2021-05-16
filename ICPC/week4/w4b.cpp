#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; cin>> n;
    vector<int> a(n);

    for(int i=0; i<n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int k; cin >>k;
    int l, r;

    while(k--)
    {
        cin >> l >> r;

        cout << upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l) << " ";

    }

    return 0;
}