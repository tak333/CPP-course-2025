#include <iostream>

void printMeow();

int main()
{
	printMeow();
	printMeow();
	printMeow();

	//std::cout << 1 == 1 ? "��" : "���" << std::endl;

	int abc = 0;

	std::cout << ((abc = 1) ? "+" : "-") << std::endl;

	int a, b = 3, c = 5;

	std::cin >> a;

	//������������:
	a = b += c; //������� b = c, ����� a = b

	std::cout << a << " " << b << " " << c << std::endl;

	a = (b += c);

	std::cout << a << " " << b << " " << c << std::endl;


	return 0;
}

void printMeow()
{
	std::cout << "meow" << std::endl;
}