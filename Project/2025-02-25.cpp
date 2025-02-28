/*

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(static_cast<unsigned> (time(nullptr)));

	int number = rand() % 100;
	std::cout << number << std::endl;

	double fraction = static_cast<double>(rand()) / RAND_MAX;
	std::cout << number + fraction << std::endl;


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
	float garmonic = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2));

	std::cout << "Average of marks: " << average << std::endl;
	std::cout << "Garmonic of mark: " << garmonic << std::endl;


	return 0;
}
*/

/*
#include <iostream>

int main()
{
	int a = 4;
	int b = 5;

	std::cout << (a <= b) << std::endl;

	return 0;
}
*/


/*

#include <iostream>
#include <iomanip>

int main()
{
	int a, b;
	std::cin >> a >> b;

	int sum = a + b;
	int diff = a - b;
	int diff_neg = b - a;
	int mult = a * b;

	std::cout << std::left << std::setw(20) << "Summa = "  << std::right << std::setw(5) << sum << std::endl;
	std::cout << std::left << std::setw(20) << "Diff = " << std::right << std::setw(5) << diff << std::endl;
	std::cout << std::left << std::setw(20) << "Diff (backwards) = " << std::right << std::setw(5) << diff_neg << std::endl;
	std::cout << std::left << std::setw(20) << "Mult = " << std::right << std::setw(5) << mult << std::endl;

	double pi = 3.141592653589793239;

	std::cout << std::setprecision(1) << pi << std::endl;
	std::cout << std::setprecision(2) << pi << std::endl;
	std::cout << std::setprecision(3) << pi << std::endl;
	std::cout << std::setprecision(4) << pi << std::endl;
	std::cout << std::setprecision(5) << pi << std::endl;
	std::cout << std::setprecision(6) << pi << std::endl;

	return 0;
}

*/