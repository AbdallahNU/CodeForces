#include <iostream>

using namespace std;

int main(void)
{
    long s[4]={0}, total=0, temp;

    for(int i=0; i<4; i++)
    {
        cin >>temp;
        if(temp!=s[0] && temp!=s[1] && temp!=s[2]) 
        {
            total++;
            s[i]=temp;
        }
    }

    cout << 4-total;   

    return 0;
}