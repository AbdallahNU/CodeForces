#include <iostream>

using namespace std;

int main(void)
{
    int n, k, count =0;
    cin >> n >> k;
    int l[n];
    for(int i=0; i<n; i++)
    {
        cin >> l[i];
    }
    for(int i=0; i<n; i++)
    {
        if(l[i]>0 && l[i] >= l[k-1])
            count++;
    }
    cout << count;
    

}