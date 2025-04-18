/*

//Пример работы на Д/З 7

#include <iostream>

void printInIndexForm(const char* str)
{
	for (size_t i = 0; str[i] != '\0'; ++i)
		std::cout << str[i] << ",";
	std::cout << "\\0" << std::endl;
}

//Арифметика указателей!
void printInPointerFrom(const char* str)
{
	const char* ptr = str;

	while ( *ptr != '\0')
	{
		std::cout << *ptr << ",";
		++ptr;
	}
	std::cout << "\\0" << std::endl;
}

int main()
{
	char str[100];

	std::cin.getline(str, 100);

	printInIndexForm(str);
	printInPointerFrom(str);

	char* ptr = str;

	//...
	++ptr;

	ptrdiff_t shift = ptr - str;
	char* ptr2 = str + shift;

	return 0;
}

*/

/*
#include <iostream>

void f1(int value)
{
	if (value <= 0)
		return;

	std::cout << value << " ";

	f1(value - 1);
}

void f2(int value)
{
	if (value <= 0)
		return;

	f2(value - 1);

	std::cout << value << " ";
}

int sum(int value)
{
	if (value == 0)
		return 0;

	return value + sum(value - 1);
}

int main()
{
	f1(5);
	std::cout << std::endl;
	f2(5);
	std::cout << std::endl;

	std::cout << sum(10) << std::endl;

	return 0;
}

*/

/*

#include <iostream>
#include <vector>

void print(const std::vector<int>& v)
{
	if (v.empty())
		std::cout << "-";
	else
		for (size_t i = 0; i < v.size(); ++i)
		{
			std::cout << v[i] << " ";
		}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, -7);

	print(v1);
	print(v2);
	print(v3);

	return 0;
}

*/