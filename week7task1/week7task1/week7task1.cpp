
/*Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки.Количество строк Н вводит пользователь(можно из файла).*/
#include <iostream>

using namespace std;

int main()
{
	float h,i,j;
	std::cout << "enter number\n";
	std::cin >> h;
	std::cout << std::endl;
	std::cout << "number=" << h << std::endl;

	for (i = 1; i < h+1; i++) {
		for (j = 0; j < i; j++) {
			std::cout << "0" ;
	
		}
		std::cout << std::endl;
	}
	std::getchar();
	std::getchar();
	return 0;
}

