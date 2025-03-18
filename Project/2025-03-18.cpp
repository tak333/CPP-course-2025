/*

#include <iostream>

int main()
{
	int n;

	std::cin >> n;

	for(int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}


	return 0;
}

*/

/*

#include <iostream>

int n = 1;

int main()
{
	std::cout << n << " ";

	int n = 2;

	std::cout << n << " ";

	{
		std::cout << n << " ";

		int n = 3;

		std::cout << n << " ";

		{
			std::cout << n << " ";

			int n = 4;
			std::cout << n << " ";

		}
		std::cout << n << " ";

	}

	std::cout << n << " ";

	std::cout << std::endl;

	return 0;
}
*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	min(2, 5);

	int min = 7;

	min(4, 7);

	return 0;
}
*/

/*
#include <limits>

int getMax()
{
	return std::numeric_limits<int>::max();
}

#include <windows.h>


int main()
{
	INT_MAX;

	int m = getMax();

	return 0;
}
*/

/*
#include <iostream>

int main()
{
	int a;


	std::cin >> a;
	if (a < 0)
		goto point1;
	else if (a % 5 == 0)
		goto point3;
point2:

	std::cout << a;

point1:
	int b;
	std::cin >> b;


	if (b % 3 == 0)
		goto point2;

point3:

	return 0;
}
*/

/*
#include <iostream>

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 4; j < 10; ++j)
		{
			if (i * j % 3 == 0)
			{
				std::cout << i * j << std::endl;
				goto END_OF_LOOP;
			}
		}
	}

END_OF_LOOP:

	return 0;
}
*/

/*
#include <iostream>

int main()
{
	int arr1[100];
	int n;
	std::cin >> n;

	constexpr int N = 100;
	int arr2[N];

	int k;
	std::cin >> k;
	const int K = k;
	//int arr2[K]; //SE

	int arr3[] = {1, 2, 3, 4, 5, 8};

	int arr4[10] = { 1, 2, 3, 4 };

	int arr5[10] = {};

	return 0;
}
*/

//ctrl + K + C - Comment
//ctrl + K + U - Uncomment
//ctrl + K + D - Align code

#include <iostream>

void input(int array[100], int n)
{
	std::cout << "Enter array:" << std::endl;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> array[i];
	}
}

int calculateSum(int array[100], int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += array[i];
	}
	return sum;
}

void task1()
{
	int array[100];
	int n;

	std::cout << "Enter n:" << std::endl;
	std::cin >> n;
	input(array, n);

	std::cout << "Summa = " << calculateSum(array, n) << std::endl;
}

void task2()
{
	int arr[100];
	int k;
	std::cin >> k;

	input(arr, k);

	for (int i = k - 1; i >= 0; --i)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	task1();
	task2();
	//task3();

	return 0;

}