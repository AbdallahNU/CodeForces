#include <iostream>

using namespace std;

int main(void)
{
    int found[26]={0}, need[26]={0}, flag=1;
    string temp;

    for(int i=0; i<2; i++)
    {
        cin >> temp;
        for(int j=0; j<temp.length(); j++)
            need[temp[j]-65]++;
    }

    cin >> temp;
    for(int i=0; i<temp.length(); i++)
        found[temp[i]-65]++;

    for(int i=0; i<26; i++)
        if(found[i]!=need[i]) flag=0;

    (flag==1)? (cout<<"YES") : (cout<<"NO");

    return 0;   
}