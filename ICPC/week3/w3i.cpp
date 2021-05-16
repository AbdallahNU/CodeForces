#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    short n, m;
    bool flag=0;
    cin >> n >> m;

    while (m>0 && flag==0)
    {
        for(short i=1; i<=n; i++)
        {
            if(m>=i)
                m-=i;
            else
            {
                flag=1;
                break;
            }
        }
    }
    
    cout << m << endl;

    return 0;
}