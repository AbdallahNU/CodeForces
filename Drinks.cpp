#include <iostream>

using namespace std;

int main(void)
{
    int n,temp;
    double total=0;
    cin >>n;

    for(int i=0; i<n; i++)
    {
        cin >>temp;
        total+=temp;
    }
    cout << total/n;    

    return 0;
}