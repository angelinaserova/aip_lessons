#include <iostream>
using namespace std;

float square(float num);
float cube(float num);

int main()
{
    std::cout << "enter number" << std::endl;
    float num;
    cin >> num;
    std::cout << "number=" << num << std::endl;
    std::cout << "square=" << square(num) << std::endl;
    std::cout << "cube=" << cube(num) << std::endl;
}

float square(float num) {
    return num * num;
}
float cube(float num) {
    return num * num * num;
}

