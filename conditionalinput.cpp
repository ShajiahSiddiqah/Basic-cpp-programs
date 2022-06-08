#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a multiple of 4:- ";
    cin >> number;
    int remainder;
    remainder = number % 4;

    while (remainder != 0)
    {
        cout << "Incorrect.\nWrite the correct one:- ";
        cin >> number;
        remainder = number % 4;
    }
    if (remainder == 0)
    {
        cout << "Correct\n";
    }
    return 0;
}