#include <iostream>

using namespace std;

void printArray(int array[], int length)
{
    cout << "{";
    for (int i = 0; i < length; i++)
    {
        cout << array[i];
        if (i != length - 1)
        cout << ", ";
    }
    cout << "}";
}

int main()
{
    int array[] = {1, 2, 3};
    printArray(array, 3);
    return 0;
}