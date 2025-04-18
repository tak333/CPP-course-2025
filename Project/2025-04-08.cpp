/*
#include <iostream>

int* createArray()
{
	int arr[100];

	for (size_t i = 0; i < 100; ++i)
		arr[i] = i + 1;

	return arr;
}

int& createInt()
{
	int k = 5;
	return k;
}

#include <string>

int main()
{

	int* newArr = createArray();

	for (size_t i = 0; i < 100; ++i)
		std::cout << newArr[i] << " ";
	std::cout << std::endl;

	std::string::npos;

	return 0;
}

*/

/*
#include <iostream>

int main()
{
	char s1 = '@';
	char s2 = 67;

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << static_cast<char>(s2 + 1) << std::endl;
	
	if ('A' <= s2 && s2 <= 'Z')
	{
		std::cout << "It's a letter!" << std::endl;
		char low = s2 - 'A' + 'a'; //67 - 65 = 2
		std::cout << low << std::endl;
	}
	else
	{
		std::cout << "It's a NOT letter!" << std::endl;
	}

	return 0;
}
*/