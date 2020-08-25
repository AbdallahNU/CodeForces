#include <iostream>

using namespace std;

int notPrime(int);


int main(void)
{
    int num1, num2, n;

    cin >> n;

    for(int i=0; i<n/2; i++)
    {
        num1 =i+2;
        num2=n-num1;
        if(notPrime(num1) && notPrime(num2))
        {
            cout << num1 << " " << num2 << "\n";;
            break;
        }
    }

    return 0;
}

int notPrime(int x)
{
    int prime=1;
    for(int i=2; i<x; i++)
        if(x%i==0) prime=0;
    if(prime)
        return 0;
    else
        return 1;
}