/*
* Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.Температура (градусы, кельвины, фаренгейты)

*/

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Vvedite znacheniye"<< std :: endl;
    float a;
    cin >> a;
    std::cout << a << " kelvin=" << (a-273.15)*1.8+32 <<" fahrenheit" << std::endl;
    std::cout << a << " kelvin=" << a-273.15 <<" degree" << std::endl;
    std::cout << a << " fahrenheit=" <<(a-32)*5/9+273.15  <<" kelvin" << std::endl;
    std::cout << a << " fahrenheit=" <<(a-32)/1.8  <<" degree" << std::endl;
    std::cout << a << " degree=" <<(a*1.8)+32  <<" fahrenheit" << std::endl;
    std::cout << a << " degree=" << a+273.15 <<" kelvin" << std::endl;
}
