/*Задача2
Напишите программу, которая принимает от пользователя координаты точки и
определяет, попала ли точка в заштрихованную область.
Г
*/
#include <iostream>
#include <math.h>

using namespace std;

struct Coordinates {
    float x;
    float y;
};

int main()
{
    Coordinates point;
    std::cout << "Enter the coordinates of point\n";
    std::cin >> point.x >> point.y;

    cout << "Point(" << point.x << ";" << point.y << ")";
    if (((point.y > point.x * point.x - 2) && (point.y <= point.x) || (point.y > point.x * point.x - 2) && (point.y <= -point.x))) {
        cout << "prinadlezhit";
    }
    else {
        cout << "ne prinadlezhit";
    }

}

