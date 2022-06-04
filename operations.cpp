#include <iostream>

using namespace std;

int main()
{
    int number = 1234;
    float addition = number + 10;
    addition = addition / 15;
    number = 9;   
     // number = number + 1 
    cout << ++number << endl;
    cout << ++number << endl;
    return 0;
}