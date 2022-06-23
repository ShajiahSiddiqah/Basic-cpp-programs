#include <iostream>

using namespace std;

int main ()
{
    int number;
    cout << "Enter a number:- ";
    cin >> number;
    int power;
    cout << "Enter the power:- ";
    cin >> power;
    int answer = 1;
    for (int i = 0; i < power; i++)
    {
        answer *= number;
    }
    cout << "The answer is " << answer << "." << endl;

    return 0;
}