#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    short n, input;
    cin >> n;

    vector<short> pos;
    vector<short> neg;
    vector<short> zero;

    for(short i=0; i<n; i++)
    {
        cin >> input;
        if(input>0)
            pos.push_back(input);
        else if(input<0 && neg.size()==0)
            neg.push_back(input);
        else
            zero.push_back(input);
    }
    
    if(pos.size()==0)
    {
        sort(zero.begin(), zero.end(), greater<short>());
        pos.push_back(*(zero.end()-1));
        zero.pop_back();
        pos.push_back(*(zero.end()-1));
        zero.pop_back();
    }

    cout << neg.size() << " ";
    for(short x: neg) cout << x << " ";
    cout << endl;

    cout << pos.size() << " ";
    for(short x: pos) cout << x << " ";
    cout << endl;

    cout << zero.size() << " ";
    for(short x: zero) cout << x << " ";
    cout << endl;

    return 0;
}