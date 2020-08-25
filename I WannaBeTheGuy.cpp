#include <iostream>
using namespace std;

int main(void)
{
    int n, x, y, total=0;
    cin>>n;
    
    int levels[n] = {0};

    cin >>x;
    int p[x];
    for(int i=0; i<x; i++)
    {
        cin >>p[i];
        levels[p[i]-1]=1;
    }

    cin >>y;
    int a[y];
    for(int i=0; i<y; i++)
    {
        cin >>a[i];
        levels[a[i]-1]=1;
    }

    for(int i=0; i<n; i++)
        total+=levels[i];

    (total==n)? (cout<<"I become the guy.") : (cout<<"Oh, my keyboard!"); 
    

    return 0;
}