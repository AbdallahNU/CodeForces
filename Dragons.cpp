#include <iostream>

using namespace std;

int main(void)
{
    int s, n, win=1;

    cin >>s >>n;

    int dragons[n][2];

    for(int i=0; i<n; i++)
        cin >>dragons[i][0] >>dragons[i][1];


    while (true)
    {
        int swapped =0;

        for(int i=0; i<n-1; i++)
        {
            if(dragons[i][0]>dragons[i+1][0])
            {
                swap(dragons[i][0], dragons[i+1][0]);
                swap(dragons[i][1], dragons[i+1][1]);
                swapped =1;
            }
        }
        if(swapped==0) break;
    }

    for(int i=0; i<n; i++)
        (s>dragons[i][0])? s+=dragons[i][1] : win=0;
    

    (win)? (cout<<"YES") : (cout<<"NO");

    return 0;  
}