// expression
// arithmetic expression
// 1 + 1
// 3 - 2
// x + y
// x * 2

// boolean expression
// 2 < 3
// 3 == 3
// 1 < 1
// 6 <= 6
// int x = 6;
// int y = 8;
// x < y && x == y
// x < y || x == y
// true
// false

#include <iostream>

using namespace std;

int main(){

int  x = 20;
int y = 14;
if (x < y) {
cout << "x is less than y ";
} else if (x == y) {
    cout << "x is equals to y ";
} else {
    cout << "x is greater than y";
}

return 0;
}