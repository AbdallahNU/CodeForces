#include <iostream>
    
using namespace std;
    
int main(void)
{
    int n, temp;
    cin >>n;
    int list[n];
    
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        list[temp-1] = i+1;
    }
    
    for(int i=0; i<n; i++)
        cout << list[i] << " ";
    
    return 0;
}