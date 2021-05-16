#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, t, input;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        set<int> s;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> input;
            if(s.find(input)!=s.end()) input++;
            s.insert(input);
        }
        cout << s.size() << endl;
    }

    return 0;
}