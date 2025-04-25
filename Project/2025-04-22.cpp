/*

#include <iostream>
#include <vector>
#include <list>
#include <set>
//#include <map>

template<typename Type>
void print(const Type& container)
{
	typename Type::const_iterator it = container.begin();

	while (it != container.end())
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

template<typename Iterator>
void print(Iterator begin, Iterator end)
{
	Iterator it = begin;

	while (it != end)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> v = { 1, 2, 7, 8, 2, 9 };
	print(v);

	std::list<int> l = { 1, 2, 7, 8, 2, 9 };
	print(l);

	std::set<int> s = { 1, 2, 7, 8, 2, 9 };
	print(s);
	print(s.begin(), s.end());

	//std::map<std::string, int> m = { {"cat", 1}, {"dog", 2}, {"zebra", 1}};

	//print(l.begin(), l.end());

	return 0;
}

*/

/*
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

void printElem(int elem)
{
	std::cout << std::setw(4) << elem << " ";
}

bool isLess(int a, int b)
{
	if (a % 2 == 0 && b % 2 == 0)
		return a > b;

	if (a % 2 != 0 && b % 2 != 0)
		return a < b;

	if (a % 2 == 0)
		return false;

	//if (b % 2 == 0)
	return true;
}

int main()
{
	std::vector<int> v = { 1, 14, -7, 2, 7, 8, 2, 9 };
	std::for_each(v.begin(), v.end(), printElem);
	std::cout << std::endl;

	std::sort(v.begin(), v.end(), isLess);
	std::for_each(v.begin(), v.end(), printElem);
	std::cout << std::endl;

	return 0;
}
*/