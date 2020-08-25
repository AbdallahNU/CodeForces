#include <iostream>
    
using namespace std;
    
int main(void)
{
    int n;
    string s[2]={"I hate ", "I love "};
    cin >>n;
    
    for(int i=0; i<n; i++)
    {   
        cout << s[i%2];
        (i==n-1)? (cout<<"it") : (cout<<"that ");
    }
    
    return 0;
}