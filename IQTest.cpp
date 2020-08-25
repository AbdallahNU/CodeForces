#include <iostream>

using namespace std;

int main(void)
{
    int n, odd=0, even=0;
    cin >>n;
    int list[n];

    for(int i=0; i<n; i++)
    {
        cin>>list[i];
        if(list[i]%2==0)
            even++;
        else
            odd++;
    }

    if(even>odd)
    {
        for(int i=0; i<n; i++)
        {
            if(list[i]%2==1)
                cout << i+1;
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(list[i]%2==0)
                cout << i+1;
        }
    }
    
    return 0;
}