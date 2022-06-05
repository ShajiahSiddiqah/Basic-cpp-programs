#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Type number:- ";
    cin >> number;
    int remainder = number % 3;
if ( remainder == 0) {
    cout << number << " is divisible by 3.\n";
} else {
    cout << number << " is not divisible by 3.\n";
}
}