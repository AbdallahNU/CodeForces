#include <bits/stdc++.h>
using namespace std;

int fact(short x)
{
    int ans=1;

    for(int i=1; i<=x; i++)
        ans*=i;

    return ans;
}

int main(void)
{
    vector<pair<short,short>> v;
    short x,y,a,b, count=0;
    cin >> x >> y >> a >> b;

    if(b>=x)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        for(short i=a; i<=x; i++)
        {
            for(short j=b; j<=y && j<i; j++)
            {
                v.push_back(make_pair(i,j));
                count++;
            }
        }
    }

    cout << count << endl;
    for(short i=0; i<v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;

    return 0;
}