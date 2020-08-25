#include <iostream>

using namespace std;

int main(void)
{
    long int n, l;
    long double max=0;
    cin >>n >>l;

    double a[n];

    for(int i=0; i<n; i++)
        cin >> a[i];

    while (true)
    {
        int swaped =0;

        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
             swap(a[i], a[i+1]);
             swaped =1;
            }
        }
        if(swaped==0) break;
    }

    if(a[0]-0>max) max=a[0];
    if(l-a[n-1]>max) max=l-a[n-1];

    for(int i=0; i<n-1; i++)
        if((a[i+1]-a[i])/2>max) max=(a[i+1]-a[i])/2;

    
    cout.setf(ios::fixed, ios::floatfield);
    cout << max;

    return 0;
}