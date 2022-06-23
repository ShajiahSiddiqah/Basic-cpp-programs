#include <iostream>

using namespace std;

int main ()
{
    int numbers[] = {1,2,3,4};
    int answer = 0;
    for (int i = 0; i < 4; i++)
    {
        answer += numbers[i] ;
    }
    cout << "sum = " << answer << endl;

    return 0;
}