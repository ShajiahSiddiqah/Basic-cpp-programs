// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main()
{
    float subjects[5];
    float total = 0;
    for(int i=0;i <= 4; i++)
    {
        float temp;
        cout << "Enter marks for Subject "<< i+1 <<  " out of 100: ";
        cin >> temp;
        total += temp;
    }    
    int max = 500;
    double percentage = total/max*100;
    cout <<"Percentage:- " << percentage << "%";
    return 0;
}