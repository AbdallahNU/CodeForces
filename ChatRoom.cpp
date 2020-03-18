#include <iostream>

using namespace std;

int main(void)
{
    int foundH=0, foundE=0, foundL=0, foundO=0;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if (s[i]=='h')
            foundH=1;
        if(s[i]=='e' && foundH==1)
            foundE=1;
        if(s[i]=='l' && foundE==1)
            foundL+=1;
        else if(s[i]=='o' && foundL>=2)
            foundO = 1;    
    }
    if(foundH==1 && foundE==1 && foundL>=2 && foundO==1)
        cout <<"YES";
    else
        cout << "NO";

    return 0;
}