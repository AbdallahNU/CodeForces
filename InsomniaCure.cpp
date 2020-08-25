#include <iostream>

using namespace std;

int main(void)
{
    int k[5],count=0;

    for(int i=0; i<5; i++)
        cin >>k[i];

    int flags[k[4]]={0};

    for(int i=0; i<4; i++)
    {
        for(int j=k[i]; j<=k[4]; j+=k[i])
        {
            if (flags[j-1]==0)
            {
                flags[j-1] =1;
                count++;
            }
        }
    }
    cout << count;

    return 0;
}