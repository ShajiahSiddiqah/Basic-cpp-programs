#include <iostream>
#include <string>

using namespace std;

int main()
{
    string abc = "Samnar pagal";
    string reverse = "";
    int count = 0;
    for (int i = abc.length(); i >= count; i--)
    {
        reverse += abc[i];
    }
    cout << reverse << endl;
    

    return 0;
}