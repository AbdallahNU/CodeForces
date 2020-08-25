#include <iostream>
    
using namespace std;
    
int main(void)
{
    int n, p, q, total=0;
    
    cin >>n;
    
    for(int i=0; i<n; i++)
    {
        cin >>p >>q;
        if(q-p >=2)
            total++;
    }
    cout << total;
    
    return 0;
}