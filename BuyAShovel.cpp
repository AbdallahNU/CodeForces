#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int k, r;

    cin >>k >>r;

    if(k<10 && k==r)
        cout << 1;
    else
    {
        for(int i=1; i<10; i++)
        {
            if((i*k)%10==0 || ((i*k)-r)%10==0)
            {
                cout << i;
                break;
            }
        }
    }

    return 0;
}