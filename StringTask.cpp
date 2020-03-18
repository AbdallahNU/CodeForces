#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    string word, newWord, vowels = "aioeyu";
    string c;

    cin >> word;

    for(int i=0,n= word.length(); i<n; i++)
    {
        if(vowels.find(tolower(word[i])) > 100)
        {   
            c = tolower(word[i]);
            newWord.append(".");
            newWord.append(c);

        }
    }
    cout << newWord << endl;

    return 0;
}