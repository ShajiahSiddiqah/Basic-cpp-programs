#include <iostream>

using namespace std;

int main()
{
    int number1;
    cout << "Find the HCF of two numbers.\nEnter number one:- ";
    cin >> number1;
    int number2;
    cout << "Enter number two:- ";
    cin >> number2;
    int remainder;
    int HCF;
    remainder = number2 % number1;
    while (remainder > 0)
    {
        number2 = number1;
        number1 = remainder;
        remainder = number2 % number1;
    }
    HCF = number1;
    cout << "The HCF is " << HCF <<"." << endl;

    return 0;
}