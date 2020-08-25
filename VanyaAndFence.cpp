#include <iostream>
    
using namespace std;
    
int main(void)
{
    int n, h, width=0;
    cin >>n >>h;
    int a[n];
    
    for(int i=0; i<n; i++)
    {
        cin >>a[i];
        if(a[i]>h)
            width+=2;
        else
            width++;
    }
    
    cout << width;
    
    return 0;
}