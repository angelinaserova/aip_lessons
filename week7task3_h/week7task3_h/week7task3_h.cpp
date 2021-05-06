// Пользователь задаёт число Ч и Х. Посчитать y: ЗАДАНИЕ H
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, num;
	float y = 0;
	float chis = 1;
	float znam = 1;
	int fac = 0;
	std::cout << "VVedite nechetnoe chislo\n";
	std::cin >> num;
	std::cout << "chislo=" << num << std::endl;

	std::cout << "VVedite x\n";
	std::cin >> x;
	std::cout << "x=" << x << std::endl;

	while (fac  <= num ) {
		fac += 1;
		chis=chis*x;
		znam =znam*fac;
		if (fac % 2 != 0) {
			y += chis / znam;
			y = y * (-1);
		}
	}

	std::cout << "y=" << y;
}
