#include <iostream>
    
using namespace std;
    
int main(void)
{
    int n, max=0, temp=0, x;
    cin >> n;
    int numbers[n];
    
    for(int i=0; i<n; i++)
    {
        cin >> numbers[i];
    
        if (i==0 || numbers[i]>=numbers[i-1])
            temp ++;           
        else
            temp =1;
        
        if (temp > max)
            max = temp; 
    }
    
    cout << max;
    
    return 0;
}