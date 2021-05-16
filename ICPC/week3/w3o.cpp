#include <bits/stdc++.h>
using namespace std;
    
bool sortPairBySecond(pair<int,int> x1, pair<int,int> x2)
{
    return x1.second > x2.second;
}

bool sortPairByFirst(pair<int,int> x1, pair<int,int> x2)
{
    return x1.first > x2.first;
}
    
int main(void)
{
    int v, input;
    vector<pair<int,int>> p;
    vector<int> p2;
    
    cin >> v;
    
    for(int i=0; i<9; i++)
    {
        cin >> input;
        p.push_back(make_pair(i+1, input));
    }
    
    sort(p.begin(), p.end(), sortPairBySecond);
    
    if (v<p[8].second)
    {
        cout << "-1";
        return 0;
    }
    

    for(;;)
    {
        if(v-p[8].second>=0)
        {
            p2.push_back(p[8].first);
            v-=p[8].second;
        }
        else
            break;        
    }

    int t = p[8].second;

    sort(p.begin(), p.end(), sortPairByFirst);

    for(int h=0; h<p2.size(); h++)
    {
        for(int k=0; k<9; k++)
        {
            if(p[k].first>p2[h] && v+t>=p[k].second)
            {
                p2[h] = p[k].first;
                v+=t;
                v-= p[k].second;
                break;
            }
        }
    }
    
    for(int i=0; i<p2.size(); i++)
        cout << p2[i];
    
    return 0;
}