#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    string n;
    cin >> s;

    for(char i=0; i<s.length(); i++)
    {
        char c = tolower(s[i]);
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y')
        {
            n.push_back(tolower('.'));
            n.push_back(tolower(c));
        }
    }    
    cout << n;
}