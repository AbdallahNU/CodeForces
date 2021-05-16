#include <bits/stdc++.h>
#define lg  long long
using namespace std;

string recipe;
lg nb, ns, nc, pb, ps, pc, r, lo=0, hi=(4*10e12), mid, sum, b, s, c;

bool canMake(lg mid)
{
    lg rr = r;
    b = count(recipe.begin(), recipe.end(), 'B');
    s = count(recipe.begin(), recipe.end(), 'S');
    c = count(recipe.begin(), recipe.end(), 'C');

    if(nb<b*mid)
    {
        if(rr>=pb*(b*mid-nb))
            rr-= pb*(b*mid-nb);
        else
            return false;
    }

    if(nc<c*mid)
    {
        if(rr>=pc*(c*mid-nc))
            rr-= pc*(c*mid-nc);
        else
            return false;
    }

    if(ns<s*mid)
    {
        if(rr>=ps*(s*mid-ns))
            rr-= ps*(s*mid-ns);
        else
            return false;
    }

    return true;
}

lg bs()
{
    while (lo<hi)
    {
        mid = (lo+hi+1)/2;
        (canMake(mid))? lo=mid : hi=mid-1;
    }
    return lo;
}


int main(void)
{
    cin >> recipe;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    cout << bs() << endl;

    return 0;
}