/*Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого 
числа
*/
#include <iostream>
using namespace std;
int main()
{
    std::cout << "enter number" << std::endl;
    float num;
    cin >> num;
    std::cout << "number=" << num << std::endl;
    std::cout << "square=" << num * num << std::endl;
    std::cout << "cube=" << num * num * num << std::endl;
}

