#include <iostream>

using namespace std;

int main(void)
{
    int n, h[101]={0}, a[101]={0}, x, y, total=0;
    cin >>n;

    for(int i=0; i<n; i++)
    {
        cin >>x >>y;
        h[x]++;
        a[y]++;
    }

    for(int i=1; i<101; i++)
    {
        if(h[i]>0 && a[i]>0)
            total += h[i]*a[i];
    }
    cout << total;

    return 0;
}