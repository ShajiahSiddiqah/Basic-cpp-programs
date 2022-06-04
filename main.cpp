#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    cout << "what's your age?" << endl;
    cin >> age;
    // age = 20;
    string name;
    cout << "What is your name ?" << endl;
    cin >> name;
    float amount = 23.25;
    cout << "hello world\n"
         << "my name is " << name << "\n"
         << "I am " << age << " years old" << endl;
    cout << "your amount is " << amount << "\n" ;
    return 0;
}