#include <iostream>

using namespace std;

int main(void)
{
    int n, max=1, max_index=0, min=101, min_index=1;
    cin >>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >>a[i];
        if(a[i]>max)
        {
            max=a[i];
            max_index =i;
        } 
        if(a[i]<=min)
        {
            min = a[i];
            min_index=i;
        }
    }
    (min_index<max_index)? (cout<<n-min_index+max_index-2) : (cout<<n-min_index+max_index-1);    

    return 0;
}