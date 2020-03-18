#include <iostream>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    (s.find("0000000") < 100 || s.find("1111111") < 100)? cout << "YES" : cout << "NO";

    return 0;
}