/*Протабулировать функции(шаг и диапазон задаёт пользователь)

*/

#include <iostream>
#include<math.h>

using namespace std;

float fun1(float x);
float fun2(float x);

int main()
{
    float x, dx, xf, f1, f2;
    setlocale(0, "");
    std::cout << "введите x0\n";
    std::cin >> x;
    std::cout << "введите xf\n";
    std::cin >> xf;
    std::cout << "введите шаг dx\n";
    std::cin >> dx;

    while (x < xf) {

        f1 = fun1(x);
        std::cout << "f1=" << f1 << std::endl;
        x += dx;
    }
    cout << "\n";
    std::cout << "введите x0\n";
    std::cin >> x;
    std::cout << "введите xf\n";
    std::cin >> xf;
    std::cout << "введите шаг dx\n";
    std::cin >> dx;

    while (x < xf) {

        f2 = fun2(x);
        std::cout << "f2=" << f2 << std::endl;
        x += dx;
    }

}

float fun1(float x) {
    float out = (-3 + x) * (-3 + x) + 2 * x + 5;
    return out;

}
float fun2(float x) {
    float out = (-4 + x) * (-3 + x) + 2 * x + 5;
    return out;

}