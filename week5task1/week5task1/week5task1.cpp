/* Задача 1
D)
Дана функция y=f(x). Найти значение функции по x:
y = 3x - 7, если x > 1
y = 3, если x = 1
y = 3 * |x+2| - 7, если x < 1

*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x,y;
    cout << "vvedite x\n";
    cin >> x;
    std::cout << "x=" << x << std::endl;
    if (x > 1) {
        y = 3 * x - 7;
        cout << "y=" << y;
    }
    if (x == 1) {
        y = 3 ;
        cout << "y=" << y;
    }
    if (x < 1) {
        y = 3 * abs(x+2) - 7;
        cout << "y=" << y;
    }
}

