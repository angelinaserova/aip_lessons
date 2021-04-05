/*Напишите программу, которая принимает от пользователя координаты точки и 
определяет, попала ли точка в заштрихованную область.
Г
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y, l, r1, r2;
    cout << "vvedite x\n";
    cin >> x;
    cout << "vvedite y\n";
    cin >> y;
    cout << "tochka(" << x << ";" << y << ")";

    r1 = 1;
    r2 = 0.3;
    l = sqrt(x * x + y * y);

    bool area1 = ((y > 0) && (l < r1));
    bool area2 = (area1 && (x < 0));
    bool area3 = (area1 && (l > r2) && (x > 0.1));
    if (area2 || area3) {
        cout << "prinadlezhit";
    }
           else {
        cout << "ne prinadlezhit";
    }
}

