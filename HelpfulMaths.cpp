#include <iostream>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    if(s.length()==1)
    {
        cout << s;
        return 0;
    }
    
    while (true)
    {
        int swaped = 0;
        
        for(int i=0; i<s.length()-2; i+=2)
        {
            if (s[i]>s[i+2])
            {
                swap(s[i], s[i+2]);
                swaped =1;
            }
        }
        if(swaped==0)
            break;
    }
    cout << s;

    return 0;
}