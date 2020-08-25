#include <iostream>


using namespace std;

int main(void)
{
    int n, total=0;
    string s;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> s;
        switch (s[0])
        {
        case 'T':
            total+=4;
            break;
        case 'C':
            total+=6;
            break;
        case 'O':
            total+=8;
            break;
        case 'D':
            total+=12;
            break;
        case 'I':
            total+=20;
            break;            
        }
    }
    cout << total; 

    return 0;
}