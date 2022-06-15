#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    string reverse = "";
    cout << "Write a word:- ";
    cin >> word;
    int count = 0;
    for (int i = word.length()-1; i >= count; i--)
    {
        reverse += word[i];
    }
    cout << reverse << endl;
    if (word == reverse)
    {
        cout << "The word " << word << " is a palindrom.\n";
    }
    else if (word != reverse)
    {
        cout << "The word " << word << " is not a palindrom.\n";
    }
    return 0;
}