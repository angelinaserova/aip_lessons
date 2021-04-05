/*Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной 
покупки из 300 г конфет и 400 г печенья; б) трех покупок, каждая из 2 кг печенья и 
1 кг 800 г конфет.

*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    std::cout << "vvedite stoimost konfet"<< std::endl;
    float zakup_a, zakup_b, kgkonfet, kgpechenki;

    std::ofstream fo;
    std::ifstream fi;

    cin >> kgkonfet;
    std::cout << "1 kg konfet=" << kgkonfet<< std::endl;
    std::cout << "vvedite stoimost pechenek" << std::endl;
    cin >> kgpechenki;
    zakup_a = kgkonfet / 1000 * 300 + kgpechenki / 1000 * 400;
    std::cout << "300g konfet i 400g pechenek= " << zakup_a << std::endl;
    zakup_b = 3 * (2 * kgpechenki + kgkonfet / 1000 * 1800);
    std::cout << "3 x 2kg pechenek i 1 kg 800g konfet=" << zakup_b << std::endl;

    fo.open("in.txt");
    fo <<  kgkonfet << " " << kgpechenki << " " << zakup_a << " " << zakup_b   ;
    fo.close();

    fi.open("in.txt");
    fi >> kgkonfet >> kgpechenki >> zakup_a >> zakup_b;
    fi.close();



}

