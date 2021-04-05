/*Вычислите значение выражения:
 (abs(x-5)-sin(x))/3+sqrt(x*x+2014)*cos(2*x)-3
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    std::cout << "vvedite x"<< std::endl;
    float x;

    std::ofstream fo;
    std::ifstream fi;


    cin >> x;
    std::cout << "x= "<< x << std::endl;
    std::cout << "otvet= " << (abs(x-5)-sin(x))/3+sqrt(x*x+2014)*cos(2*x)-3 << std::endl;

    fo.open("in.txt");
    fo << x;
    fo.close();

    fi.open("in.txt");
    fi >> x;
    fi.close();


}

