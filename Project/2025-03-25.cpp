/*

#include <iostream>
#include <fstream>

int main()
{
	//input file stream
	std::ifstream input("alina.txt");

	if (!input.is_open())
	{
		std::cerr << "Input file is not found!" << std::endl;
		return -1;
	}

	//output file stream
	std::ofstream output("result_of_my_task.txt");

	if (!output.is_open())
	{
		std::cerr << "Output file is not opened!" << std::endl;
		return -2;
	}

	//while not end of file
	while (!input.eof())
	{
		double n;

		//if (input)
		//if (input.good())
		if (input >> n)
		{
			std::cout << n << std::endl;

			if (n > 0)
			{
				output << n << " ";
			}
		}
	}

	return 0;
}

*/

/*
#include <iostream>

int main()
{
	int a = 0;
	int b = NULL;
	//int c = nullptr;

	int* p1 = 0;
	int* p2 = NULL;
	int* p3 = nullptr;
	//int* p4 = 1;
	int* p5;

	std::cout << p5 << std::endl;

	return 0;
}
*/

/*
#include <iostream>

int main()
{
	int k = 5;

	int* p = &k;

	std::cout << p << std::endl;
	std::cout << *p << std::endl;
	std::cout << &p << std::endl;

	return 0;
}

*/