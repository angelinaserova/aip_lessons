/*
Пользователь вводит параметры фигуры. Найти периметр и площадь фигуры прямоугольный треугольник

*/

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Ploshad i perimetr pryamougolnogo treugolnika" << std:: endl;
    std::cout << "Enter katet_a " << std::endl;
    float katet_a , katet_b , gipotenuza_c, s, p;
    cin >> katet_a;
    std::cout << "katet_a= "<< katet_a << std::endl;
    std::cout << "Enter katet_b " << std::endl;
    cin >> katet_b;
    std::cout << "katet_b= " << katet_b << std::endl;
    std::cout << "Enter gipotenuza_c " << std::endl;
    cin >> gipotenuza_c;
    std::cout << "gipotenuza_c= " << gipotenuza_c << std::endl;
    p = katet_a + katet_b + gipotenuza_c;
    std::cout << "p= " << p << std::endl;
    s = katet_a * katet_b / 2;
    std::cout << "s= " << s << std::endl;
}

