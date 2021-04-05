/*
Дана функция y=f(x). Найти значение функции по x:
G)
y = (2+x)2 + 7, если x > -8
y = 5, если x = -8
y = |2 * x-1| - 1, если x < -8

*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y;
    cout << "vvedite x\n";
    cin >> x;
    std::cout << "x=" << x << std::endl;
    if (x > -8) {
        y = (2 + x) * 2 + 7;
        cout << "y=" << y;
    }
    if (x == -8) {
        y = 5;
        cout << "y=" << y;
    }
    if (x < -8) {
        y = abs(2 * x - 1) - 1;
        cout << "y=" << y;
    }
}

