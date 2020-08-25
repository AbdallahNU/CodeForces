#include <bits/stdc++.h>

using namespace std;

unordered_map<string,int> counter;


int main(void)
{
    int n;
    cin >> n;
    

    while (n--)
    {
        string s;
        cin >>s;

        (counter[s]==0)? (cout<<"OK\n") : (cout<<s+to_string(counter[s])<<"\n");
        counter[s]++;
    }
    

    return 0;
}