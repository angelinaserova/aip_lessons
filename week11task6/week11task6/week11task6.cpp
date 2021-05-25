/*Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о самом точном датчике.*/

#include <iostream>

using namespace std;

struct Diapason {
    float min , max;
};
struct Sensor {
    Diapason d;
    float error;
    float speed;
}A,B;
 
int main()
{
    cout << "Enter the diapason of sensor A(min max)\n";
    cin >> A.d.min >> A.d.max;
    cout << "Enter the diapason of sensor B(min max)\n";
    cin >> B.d.min >> B.d.max;
    cout << "Diapason of sensor A " << A.d.min << " ; " << A.d.max << "\n";
    cout << "Diapason of sensor B " << B.d.min << " ; " << B.d.max << "\n";
    
    cout << "Enter the error and speed of sensor A(error speed)\n";
    cin >> A.error >> A.speed;
    cout << "Enter the error and speed of sensor B(error speed)\n";
    cin >> B.error >> B.speed;
    cout << "Error of sensor A " << A.error << " Speed of sensor A " << A.speed<< "\n";
    cout << "Error of sensor B " << B.error << " Speed of sensor B " << B.speed << "\n";

    if (A.error < B.error) {
        cout << "Sensor A more exact then Sensor B";
    }
    else cout << "Sensor B more exact then Sensor A";

  
}
