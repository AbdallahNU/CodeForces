#include <iostream>
using namespace std;

int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    char df=0, x[2], y[2], yes=0;
    if(s1.length()==s2.length())
    {
        for(int i=0; i<s2.length(); i++)
        {
            if (s1[i]==s2[i])
                continue;
            else
            {
                if (df>1)
                {
                    cout << "NO";
                    return 0;
                }
                else if(df==1)
                {
                    if(x[df-1]==s2[i] && y[df-1]==s1[i])
                    {
                        yes++;
                    }
                    else
                    {
                        cout << "NO";
                        return 0;
                    }
                }
                else
                {
                    x[df] = s1[i];
                    y[df] = s2[i];
                    df++;
                }
            }
        }
    }
    else
    {
        cout << "NO";
        return 0;
    }
    if(yes==1)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";

    return 0;
}