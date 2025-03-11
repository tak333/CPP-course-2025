//Задача №3074. Числа Фибоначчи
//https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3074#1
/*
#include <iostream>

//По данному числу n определите n-е число Фибоначчи.
int main()
{
	int n;
	std::cin >> n;

	int fibN1 = 0;
	int fibN2 = 1;

	if (n == 0)
		std::cout << fibN1;
	else if (n == 1)
		std::cout << fibN2;
	else
	{
		int fibN3;
		for(int i = 2; i <= n; ++i)
		{
			fibN3 = fibN1 + fibN2;

			fibN1 = fibN2;
			fibN2 = fibN3;
		}

		std::cout << fibN3;
	}

	return 0;
}
*/

//Задача №120. 1/0!+1/1!+1/2!+...
//https://informatics.msk.ru/mod/statements/view.php?id=278&chapterid=120#1

#include <iostream>

unsigned long long factorial(int x)
{
	unsigned long long result = 1;

	for (int i = 1; i <= x; ++i)
	{
		result *= i;
	}

	return result;
}

int main()
{
	bool isAmountKnown = false;

	double sum = 0;
	if (isAmountKnown) {
		int n;
		std::cin >> n;

		//НЕХОРОШО:
		/*
		for (int i = 0; i <= n; ++i)
		{
			sum += 1.0 / factorial(i);
		}*/

		//ХОРОШИЙ, но мы знаем количество членов ряда:
		unsigned long long fact = 1;
		for (int i = 0; i <= n; ++i)
		{
			sum += 1.0 / fact;
			fact *= (i + 1);
		}
	}
	else {
		double eps = 1e-6; //1 * 10^-6

		unsigned long long fact = 1;
		int i = 0;
		double part;
		do
		{
			part = 1.0 / fact;
			sum += part;
			fact *= (i + 1);
			++i;
		} while (fabs(part) > eps);
	}

	std::cout << sum << std::endl;

	return 0;
}