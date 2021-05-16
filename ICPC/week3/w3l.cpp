#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    short n, input, count=0;
    cin >> n;

    set<short> a;

    for(short i=0; i<n; i++)
    {
        cin >> input;
        a.insert(input);
    }

    for(short i=1; i<=n; i++)
    {
        if(a.find(i)==a.end())
            count++;
    }

    cout << count << endl;

    return 0;
}