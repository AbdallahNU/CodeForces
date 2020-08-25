#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    
    cin >> t;

    long long cases[t];

    for(int i=0; i<t; i++)
    {
        long total=0, temp;
        cin >> cases[i];
        (cases[i]%2!=0)? (cout << cases[i]/2) : (cout << cases[i]/2-1);
        cout << "\n";
    }

    return 0;
}