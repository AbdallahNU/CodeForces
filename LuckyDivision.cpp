#include <iostream>

using namespace std;

int main(void)
{
    string n;
    int k,lucky=1;
    cin >> n;
    k = stoi(n);

    for(int i=0; i<n.length(); i++)
    {
        if (n[i] !='7' && n[i]!='4')
            lucky =0;        
    }
    if (lucky==0)
    {
        if (k%7==0 || k%4==0 || k%74==0 || k%47==0)
            cout << "YES";
        else
            cout <<"NO";
    }
    else
        cout << "YES";
    
    return 0;
}