#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    string s1, s2;

    cin >> s1 >> s2;

    string s3 = s2;

    for(int i=0; i<s1.length(); i++)
    {
        if((s1[i]=='1' && s2[i]=='0') || (s1[i]=='0' && s2[i]=='1'))
            s3[i]='1';
        else
            s3[i]='0';        
    }
    cout << s3 << endl;
    return 0;
}