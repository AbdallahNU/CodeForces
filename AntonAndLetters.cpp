#include <iostream>

using namespace std;

int main(void)
{
    string s;
    int letters[26] ={0}, total=0;
    getline(cin, s);

    for(int i=1,n= s.length(); i<n-1; i++)
        if(s[i]!=' ' && s[i]!=',') letters[s[i]-97]=1;
    
    for(int i=0; i<26; i++)
        if(letters[i]==1) total++;

    cout << total;

    return 0;
}