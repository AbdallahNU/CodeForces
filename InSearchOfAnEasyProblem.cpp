#include <iostream>
    
using namespace std;
    
int main(void)
{
    int n, temp, flag=0;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        if(temp) flag=1;
    }
    
    (flag)? (cout<<"HARD") : (cout<<"EASY");
    
    return 0;
}