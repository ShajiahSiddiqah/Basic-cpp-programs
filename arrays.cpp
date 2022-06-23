#include <iostream>

using namespace std;

int main()
{
    // int a = 10;
    // char b = "s";
    float c = 8.4;

    // int a[5];

    // a[0] = 1;
    // a[1] = 7;
    // a[2] = 4;
    // a[3] = 5;
    // a[4] = 6;

    int a[] = {1, 7, 4, 5, 6};

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    char str[] = "Hello world";
    cout << str << endl;

    return 0;
}