#include <iostream>

using namespace std;

int main(void)
{
    int n, x, y, z, sumX=0, sumY=0, sumZ=0;
    cin >>n;

    for(int i=0; i<n; i++)
    {
        cin >> x >> y >> z;
        sumX +=x, sumY +=y, sumZ+=z;
    }
    if (sumX==0 && sumY==0 && sumZ ==0)
        cout << "YES";
    else
        cout << "NO";    

    return 0;
}