#include <iostream>

using namespace std;

void row1(int x);
void row2(int x);
void row4(int x);


int main(void)
{
    int n, m;

    cin >>n >>m;

    for(int i=1; i<n+1; i++)
    {
        if(i%2==0)
            (i%4==0)? row4(m) : row2(m);
        else
            row1(m);
    }

    return 0;
}

void row1(int x)
{
    for(int i=0; i<x; i++)
        cout << "#";
    cout << "\n";
}

void row2(int x)
{
    for(int i=0; i<x-1; i++)
        cout << ".";
    cout << "#";
    cout << "\n";
}

void row4(int x)
{
    cout << "#";
    for(int i=0; i<x-1; i++)
        cout << ".";
    cout << "\n";
}