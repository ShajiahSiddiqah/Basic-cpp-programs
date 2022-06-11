#include <iostream>

using namespace std;

int main()
{
    float number;
    cout << "Enter a number :- ";
    cin >> number;
    float times = 1;
    int number2;
    cout << "How many times you want to know the table:- ";
    cin >> number2 ;
    float result;
    while (times <= number2)
    {
        result = number * times;
        cout << number << " x " << times << " = "<< result << endl;
        times++;
    }
    return 0;
}