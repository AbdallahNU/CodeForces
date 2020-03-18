#include <iostream>

using namespace std;

int main(void)
{
    int n, a, b, now=0, max=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        now +=b;
        now -=a;
        if(now>max)
            max = now;
    }

    cout << max;

    return 0;
}