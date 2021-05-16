#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,sum,o=0; cin >> n;
    vector<int> s(n);
    for(int i=0; i<n; i++)
        cin >> s[i];

    sort(s.begin(), s.end());
    sum = n;
    for(int i=0; i<n/2; i++)
    {
        for(int j=n/2+o; j<n; j++)
        {
            if(2*s[i]<=s[j])
            {
                sum--;
                s[j]=0;
                break;
            }
            o++;
        }
        
        if(o==n)
            break;
    }

    cout << sum << endl;

    return 0;
}