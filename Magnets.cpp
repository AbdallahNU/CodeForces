#include <iostream>
    
using namespace std;
    
int main(void)
{   
    int n, breaks=0;
    cin >>n;
    string s[n];
    
    for (int i=0; i<n; i++)
        cin >> s[i];
    
    for (int i=0; i<n-1; i++)
    {
        if(!(s[i][0] == s[i+1][0]))
            breaks++;
    }
    cout << breaks+1;
    
    return 0;
}