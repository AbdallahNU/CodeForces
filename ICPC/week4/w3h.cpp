#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long sum=0,x, ma=-1, n; cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]>ma) ma=a[i];
        sum+=a[i];
    }

    x = ceil((double)sum/(n-1));

    cout << max(x,ma) << endl;
    
    
    return 0;
}