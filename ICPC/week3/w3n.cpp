#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        string a,b;
        int n, z=1, o=0;

        cin >> n;
        cin >> a;

        b = a;
        sort(b.begin(), b.end());
        
        if(b==a)
            cout << a << endl;
        else
        {
            cout << '0';
            for(int i=0; i<n; i++)
            {
                if(a[i]=='0')
                    cout<<'0';
                else
                    break;
            }
            for(int i=n-1; i>=0; i--)
            {
                if(a[i]=='1')
                    cout<<'1';
                else
                    break;
            }
            cout << endl;
        }
    }

    return 0;
}