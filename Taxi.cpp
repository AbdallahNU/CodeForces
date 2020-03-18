#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int n, count=0, c1=0, c2=0, c3=0, c4=0;
    cin >> n;
    int s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        switch (s[i])
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        }
    }

    count += c4;
    while (c3>0)
    {
        if (c1>0)
        {
            count++;
            c3--;
            c1--;
        }
        else
        {
            count++;
            c3--;
        }
    }
    while (c2>0)
    {
        if(c2>=2)
        {
            c2 -=2;
            count ++;
        }
        else
        {
            if (c1>=2)
            {
                c2 --;
                c1 -=2;
                count ++;
            }
            else if (c1==1)
            {
                c2 --;
                c1 --;
                count ++;
            }
            else if(c1==0)
            {
                c2--;
                count ++;
            } 
        }
    }
    count += ceil((double)c1/4);
    cout << count;
}