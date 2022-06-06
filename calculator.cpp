#include <iostream>

using namespace std;

int main()
{
    float number;
    cout << "Type number 1:- ";
    cin >> number;
    string op;
    cout << "Type the operation type (+,-,x,/) \n";
    cin >> op;
    float number2;
    cout << "Type number 2:- ";
    cin >> number2;
    float answer;
    if (op == "+")
    {
        answer = number + number2;
    }
    else if (op == "-")
    {
        answer = number - number2;
    }
    else if (op == "x")
    {
        answer = number * number2;
    }
    else if (op == "/")
    {
        answer = number / number2;
    }
    cout << "The answer is " << answer << endl;

    return 0;
}