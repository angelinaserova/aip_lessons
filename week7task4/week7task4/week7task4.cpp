

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m, h;
	cout << "введите начальное число\n";
	cin >> n;
	cout << "n=" << n << "\n";
	cout << "введите конечное число\n";
	cin >> m;
	cout << "m=" << m << "\n";
	cout << "введите шаг\n";
	cin >> h;
	cout << "h=" << h << "\n";

	while (n <= m) {
		cout << n << " ";
		n += h;
	}
}
