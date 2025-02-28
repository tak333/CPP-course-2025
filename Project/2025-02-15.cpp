/*

#include <iostream>

int main()
{
	int a = -5;
	unsigned b = 3;

	std::cout << a + b << std::endl;

	unsigned c = -1;

	std::cout << c << std::endl;

	int d = 2'147'483'648;

	std::cout << d << std::endl;

	return 0;
}

*/

/*
//Задание 1.

#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	//allMinutes
	//all_minutes

	//const int MIN_PER_DAY = 24 * 60;
	//n = n % MIN_PER_DAY;
	//int hours = n / 60;

	int hours = (n / 60) % 24;
	int minutes = n % 60;

	std::cout << hours / 10 << hours % 10 << ":" << minutes / 10 << minutes % 10 << std::endl;

	return 0;
}
*/

/*
#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	int sum = a + b + c + d;
	float average = static_cast<float>(sum) / 4;

	std::cout << average << std::endl;

	return 0;
}
*/