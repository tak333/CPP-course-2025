/*
#include <iostream>
#include <cmath>

int main()
{
	std::cout << "Hello";

	std::sin(7);

	return 0;
}
*/

/*
#include <iostream>

int main()
{
	double x, y;
	std::cin >> x >> y;

	{
		std::cout << "WHILE" << std::endl;

		double km = x;
		int day = 1;
		while (km < y)
		{
			km = km * 0.1 + km;
			++day;
		}

		std::cout << day << std::endl;
	}

	{
		std::cout << "FOR" << std::endl;

		int day = 1;
		for (double km = x; km < y; km = km * 0.1 + km)
		{
			++day;
		}

		std::cout << day << std::endl;
	}

	{
		std::cout << "DO ... WHILE" << std::endl;

		double km = x;
		int day = 1;

		if (km < y)
		{
			do {
				km = km * 0.1 + km;
				++day;
			} while (km < y);
		}

		std::cout << day << std::endl;
	}

	return 0;
}
*/

/*
#include <iostream>

int main()
{
	int n = 4;
	for (int i = 0; i < n; ++i)
	{
		int spaces = (n - 1) - i;
		for (int j = 0; j < spaces; ++j)
		{
			std::cout << " ";
		}

		int stars = 2 * i + 1;
		for (int j = 0; j < stars; ++j)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	return 0;
}
*/