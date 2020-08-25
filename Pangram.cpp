#include <iostream>

using namespace std;

int main(void)
{
    int n, letters[26], total=0;
    cin >>n;

    string s;
    cin >>s;

    for(int i=0; i<n; i++)
        (s[i]<97)? letters[s[i]-65]=1 : letters[s[i]-97]=1;

    for(int i=0; i<26; i++)
        total+= letters[i];

    (total==26)? (cout<<"YES") : (cout<<"NO");    

    return 0;
}