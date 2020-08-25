#include <iostream>

using namespace std;

int main(void)
{
    long long n, m, old, nex;
    long long steps=0;

    cin >>n >>m;

    for(int i=0; i<m; i++)
    {
        cin >>nex;
        
        if(i==0)
            steps += nex-1;
        else
        {
            if (nex>=old)
                steps += nex-old;
            else
                steps += n-old+nex;            
        }
        old = nex;
    }
    cout << steps;

    return 0;
}