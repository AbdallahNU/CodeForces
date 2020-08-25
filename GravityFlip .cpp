#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin >>a[i];

    while(true)
    {
        int flag =0;
        for(int i=0; i<n-1; i++)
        {
            if (a[i]>a[i+1])
            {
                swap(a[i], a[i+1]);
                flag=1;
            }   
        }
        if (flag==0)
            break;        
    }

    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    

    return 0;
}