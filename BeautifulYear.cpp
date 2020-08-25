#include <algorithm>
#include <string>
 
using namespace std;
 
int distinct(string x);
 
int main(void)
{
    int year;
    cin >> year;
 
    for(int i=year+1; i<=20000; i++)
    {
        if(distinct(to_string(i)))
        {
            cout << i;
            exit(0);
        }
    }
 
    return 0;
}
 
 
int distinct(string x)
{
    int ascii[127] = {0};
    
    for(int i=0; i<x.length(); i++)
        ascii[x[i]]++;
 
    if(*max_element(ascii, ascii+127) ==1)
        return 1;
    else
        return 0;
}