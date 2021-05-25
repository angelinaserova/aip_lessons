/*Имеется информация о роботах : габариты, вес, максимальная скорость.Вывести
данные о самом тяжёлом роботе.*/
#include <iostream>

using namespace std;

struct Size {
    float width, height, length;
};
struct Sensor {
    Size s;
    float weight;
    float speed;
}A, B;

int main()
{
    cout << "Enter the size of robot A(width, height, length)\n";
    cin >> A.s.width >> A.s.height >> A.s.length;
    cout << "Enter the size of robot B(width, height, length)\n";
    cin >> B.s.width >> B.s.height >> B.s.length;
    cout << "Enter the weight and speed of robot A(weight speed)\n";
    cin >> A.weight >> A.speed;
    cout << "Enter the weight and speed of robot B(weight speed)\n";
    cin >> B.weight >> B.speed;
    cout << "Weight of robot A " << A.weight << " Speed of robot A " << A.speed << "\n";
    cout << "Weight of robot B " << B.weight << " Speed of robot B " << B.speed << "\n";

    if (A.weight < B.weight) {
        cout << "Robot B heavier then robot A";
    }
    else cout << "Robot A heavier then robot B";


}
