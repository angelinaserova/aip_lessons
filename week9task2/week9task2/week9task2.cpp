
#include <iostream>
#include <math.h>

using namespace std;

float fun1(float x);
float fun2(float x);

int main()
{
    float x, y;

    cout << "vvedite x\n";
    cin >> x;
    std::cout << "x=" << x << std::endl;
    
    if (x > -8) {
        fun1(x);
    }
    if (x == -8) {
        y = 5;
        cout << "y=" << y;
    }
    if (x < -8) {
        fun2(x);
    }
}
float fun1(float x) {
    float y = (2 + x) * 2 + 7;
    cout << "y=" << y;
    return y;
}
float fun2(float x) {
    float y = abs(2 * x - 1) - 1;
    cout << "y=" << y;
    return y;
}
