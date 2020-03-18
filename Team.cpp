#include <iostream>

using namespace std;

int main(void)
{
    int n, count =0, p1, p2, p3;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> p1 >> p2 >> p3;
        if(p1+p2+p3 >=2)
            count ++;
    }
    cout << count;
    return 0;
}