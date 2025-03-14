/*

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	double a = 5;

	std::cout << std::setprecision(20) << std::scientific << a << std::endl;

	a /= 17;
	a = std::sqrt(a);
	a = std::sin(a);
	a *= 100;
	a = std::exp(a);

	a = std::log(a);
	a /= 100;
	a = std::asin(a);
	a = std::pow(a, 2);
	a *= 17;

	std::cout << std::setprecision(20) << std::scientific << a << std::endl;


	return 0;
}

*/

#include <iostream>
#include <cmath>

int main()
{
	double x;
	std::cin >> x;

	int n;
	std::cin >> n;

	double sum = 0;
	int sign = -1;
	double x_in_pow = x;
	unsigned long long factorial = 1;
	for (int i = 1; i <= n; ++i)
	{
		sum += sign * (x_in_pow + 4) / factorial;

		sign *= -1;
		x_in_pow *= x;
		factorial *= i + 1;
	}
	std::cout << sum << std::endl;

	return 0;
}