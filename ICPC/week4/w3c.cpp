#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    int n, t, sum=0, count=0, j=0;
    cin >> n >> t;

    vector<int> a(n);

    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)
    {
        sum += a[i];

        if(sum<=t)
            count++;
        else
        {
            sum-=a[j];
            j++;
        }        
    }
    
    cout << count << endl;

    return 0;
}