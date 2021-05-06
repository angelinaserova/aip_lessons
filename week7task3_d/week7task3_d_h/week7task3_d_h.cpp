//Пользователь задаёт число Ч и Х. Посчитать y:  ЗАДАНИЕ D


#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	float x,  num ;
	float y = 0;
	float chis = 2;
	float znam = 5;

	std::cout << "VVedite nechetnoe chislo\n";
	std::cin >> num;
	std::cout << "chislo=" << num << std::endl;

	std::cout << "VVedite x\n";
	std::cin >> x;
	std::cout << "x=" << x << std::endl;

	while ((znam+2)*x <= num*x) {
		chis += 1;
		znam += 2;
		y += chis / (znam * x);

	}

	std::cout << "y=" << y;

}