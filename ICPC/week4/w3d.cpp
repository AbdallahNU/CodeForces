#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int k,n; cin >>n;
    long lo= -2000000000, hi=2000000000;


    for(int i=0; i<n+1; i++)
    {
        long num;
        string s;
        getline(cin, s);
        string tmp;
        stringstream ss;
        ss << s;
        while (!ss.eof())
        {
            ss >> tmp;
            if(stringstream(tmp)>>k)
                num=k;
            tmp = "";
        }
        if(s.find(">=")!=string::npos)
        {
            (s.find("Y")!=string::npos)? lo=max(num,lo) : hi=min(num-1,hi);
        }
        else if(s.find(">")!=string::npos)
        {
            (s.find("Y")!=string::npos)? lo=max(num+1,lo) : hi=min(num, hi);
        }
        else if(s.find("<=")!=string::npos)
        {
            (s.find("Y")!=string::npos)? hi=min(num,hi) : lo=max(num+1,lo);
        }
        else if(s.find("<")!=string::npos)
        {
            (s.find("Y")!=string::npos)? hi=min(num-1,hi) : lo=max(num,lo);
        }
    }

    (hi>=lo)? cout<<hi<<endl: cout << "Impossible" << endl;


    return 0;
}