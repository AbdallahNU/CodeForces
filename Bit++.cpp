#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    int n, c =0;
    string x;

    cin >>n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x.find("++")<10)
            c++;
        else if(x.find("--")<10)
            c--;
    }
    cout << c;

    return 0;
}