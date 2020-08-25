#include <iostream>
    
using namespace std;
    
int allUpper(string x);
string allToLower(string x);
    
    
int main(void)
{
    string s;
    
    cin >> s;
    
    if (islower(s[0]) && allUpper(s))
        cout << allToLower(s);
    else if(isupper(s[0]) && allUpper(s))
    {
        s = allToLower(s);
        s[0] = tolower(s[0]);
        cout << s;
    }
    else
        cout << s;        
    
    return 0;
}
    
int allUpper(string x)
{
    for(int i=1; i<x.length(); i++)
    {
        if (x[i]>=97)
            return 0;       
    }
    return 1;
}
    
string allToLower(string x)
{
    x[0] = toupper(x[0]);
    
    for(int i=1; i<x.length(); i++)
        x[i] = tolower(x[i]);
    
    return x;
}