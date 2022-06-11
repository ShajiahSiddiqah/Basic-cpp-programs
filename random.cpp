#include <iostream>
#include <cstdlib>
#include <random>
#include <time.h>

using namespace std;

int main() {
    srand(time(0));
    int randomNumber = rand() % 10;
    cout << randomNumber << endl;
    return 0;
}