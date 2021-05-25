/*Создайте структуру для хранения комплексных чисел. Структура должна иметь 2
атрибута: вещественную часть и мнимую. Объявите два числа и получите их
значения от пользователя
d. Напишите функцию, которая будет складывать комплексные числа
*/
#include <iostream>
using namespace std;

struct Complex {
    float re;
    float im;
};

int main()
{
    Complex num1;
    Complex num2;

    std::cout << "Enter the real and imaginary part of a complex number 1\n";
    std::cin >> num1.re >> num1.im;

    std::cout << "Enter the real and imaginary part of a complex number 2\n";
    std::cin >> num2.re >> num2.im;

    std::cout << "num1=" << num1.re << "+(" << num1.im << "i)\n";
    std::cout << "num2=" << num2.re << "+(" << num2.im << "i)\n";

    std::cout << "amount=" << num1.re + num2.re << "+(" << num1.im + num2.im << "i)";

}
