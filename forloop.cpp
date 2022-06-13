#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number:- ";
    cin >> number;
    int limit;
    cout << "How many times you want to know the table:- ";
    cin >> limit;
    int result;
    for (int i = 1; i <= limit; i++)
    {
        result = number * i;
        cout << number << " x " << i << " = " << result << endl;
    }

    return 0;
}