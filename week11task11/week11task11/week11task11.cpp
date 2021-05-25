/*Робот-автомобиль описывается как структура с полями: скорость, длительность
движения и номер. Напишите функцию для расчёта пройденного расстояния.
*/

#include <iostream>

using namespace std;

struct Robot {
    float num;
    float time;
    float distance;
    float speed;
}autorob;

float dis(Robot autorob);

int main()
{
    cout << "Enter the number of robot\n";
    cin >> autorob.num;
    cout << "Enter the time of move of robot\n";
    cin >> autorob.time;
    cout << "Enter the speed of robot\n";
    cin >> autorob.speed;
    cout << "Number " << autorob.num << "  \n"
        << "Time of move " << autorob.time <<"  \n"
        << "Speed " << autorob.speed << " \n";
    cout << "Distance = " << dis(autorob);
    
}

float dis(Robot autorob) {
    autorob.distance = autorob.time * autorob.speed;
    return autorob.distance;
}