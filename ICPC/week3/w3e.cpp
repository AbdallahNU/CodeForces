#include <bits/stdc++.h>
using namespace std;

bool sortBySecond(const pair<int,int> &x, const pair<int, int> &y)
{
    return x.second > y.second;
}

int main(void)
{
    int n, m, p1, p2, total=0;
    vector<pair<int, int>> v;

    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> p1 >> p2;
        v.push_back(make_pair(p1, p2));
    }

    sort(v.begin(), v.end(), sortBySecond);

    for(int i=0; i<m; i++)
    {
        if(n==0) break;
        else
        {
            for(int j=v[i].first; j>0; j--)
            {
                if(n>=j)
                {
                    n-=j;
                    total+= j*v[i].second;
                    break;
                }              
            }
        }
    }

    cout << total << endl;

    return 0;
}