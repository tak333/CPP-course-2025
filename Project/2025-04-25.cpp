/*

#include <iostream>
#include <forward_list>
#include <list>

#include <vector>
#include <deque>

int main()
{
	std::forward_list<int> fl = { 1, 7, 9, 8, 15, 2, 7 };

	auto it1 = fl.begin(); //auto = std::forward_list<int>::iterator

	++it1;
	--it1;
	it1 + 5;

	std::list<int> l = { 1, 7, 9, 8, 15, 2, 7 };

	auto it2 = l.begin(); //auto = std::list<int>::iterator

	++it2;
	--it2;
	it2 + 3;

	std::deque<int> d = { 1, 7, 9, 8, 15, 2, 7 };

	auto it3 = d.begin();

	++it3;
	--it3;
	it3 + 4;
	it3 - 4;

	auto it3_1 = d.begin();
	auto it3_2 = d.begin() + 1;

	&(*it3_1) + 1 == &(*it3_2);

	return 0;
}

*/


/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <forward_list>

//void print(int elem)
//{
//	std::cout << "*" << elem << "*" << std::endl;
//}

int main()
{
	auto print =
		[](int elem) -> void
		{
			std::cout << "*" << elem << "*" << std::endl;
		};

	int arr[] = { 1, 7, 9, 5, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	std::for_each(arr, arr + n, print);
	std::cout << std::endl;

	std::vector<int> v = { 1, 7, 2, 6, 9, 5, 3, 4, 5 };

	std::for_each(v.begin(), v.end(), print);
	std::cout << std::endl;

	std::forward_list<int> l = { 1, 7, 9, 5, 3, 4, 5 };

	std::for_each(l.begin(), l.end(), print);
	std::cout << std::endl;

	auto it_answer = std::find(l.begin(), l.end(), 5);

	if (it_answer != l.end())
	{
		*it_answer = 0;

		std::for_each(l.begin(), l.end(), print);
		std::cout << std::endl;
	}
	else
	{
		std::cout << "-" << std::endl;
	}

	if (std::all_of(l.begin(), l.end(), [](int elem) { return elem >= 0; }))
	{
		std::cout << "positive" << std::endl;
	}
	else
	{
		std::cout << "negative" << std::endl;
	}

	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });

	auto isLess =
		[](int a, int b)
		{
			if (a % 2 == 0 && b % 2 == 0)
				return a < b;

			if (a % 2 != 0 && b % 2 != 0)
				return a > b;

			if (a % 2 == 0)
				return false;

			return true;
		};

	std::sort(v.begin(), v.end(), isLess);

	std::for_each(v.begin(), v.end(), print);
	std::cout << std::endl;

	return 0;
}

*/


#include <iostream>
#include <algorithm>
#include <vector>
#include <forward_list>
#include <stdexcept>

//void print(int elem)
//{
//	std::cout << "*" << elem << "*" << std::endl;
//}

int find_max_even(const std::vector<int>& v)
{
	int max = -1;

	for (size_t i = 0; i < v.size(); ++i)
	{
		if (v[i] % 2 == 0)
			if (max == -1)
				max = v[i];
			else
				if (v[i] > max)
					max = v[i];
	}

	if (max == -1)
		throw std::logic_error("Vector doesn't contain even numbers!");

	return max;
}

void change(std::vector<int>& v)
{
	int mEven = find_max_even(v);
	int counter = 0;
	for (size_t i = 0; i < v.size(); ++i)
	{
		if (v[i] < mEven)
		{
			v[i] = 0;
			++counter;
		}
	}

	if (counter == 0)
		throw std::runtime_error("Elements havn't been changed!");
}

int main()
{
	auto print =
		[](int elem) -> void
		{
			std::cout << elem << " ";
		};

	std::vector<int> v = { 1, 7, 7, -2, 9, 5, 3, 3, 5 };

	std::for_each(v.begin(), v.end(), print);
	std::cout << std::endl;

	try {
		change(v);
	}
	catch (std::exception error)
	{
		std::cout << error.what() << std::endl;
	}
	/*catch (std::runtime_error error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (std::logic_error error)
	{
		std::cout << error.what() << std::endl;
	}*/

	std::for_each(v.begin(), v.end(), print);
	std::cout << std::endl;

	try{
		int k;
		std::cin >> k;

		auto it_answer = std::find(v.begin(), v.end(), k);

		//*it_answer = 0;

		std::cout << v.at(k) << std::endl;

		std::for_each(v.begin(), v.end(), print);
		std::cout << std::endl;
	}
	catch (std::exception error)
	{
		std::cout << error.what() << std::endl;
		throw;
	}

	return 0;
}