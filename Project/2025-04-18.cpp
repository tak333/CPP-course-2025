#include <iostream>
#include <vector>

template<typename Type>
void print(const std::vector<Type>& vector)
{
	for (size_t i = 0; i < vector.size(); ++i)
	{
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
}

void print(int x)
{
	std::cout << "INT " << x;
	std::cout << std::endl;
}

void print(double x)
{
	std::cout << "DOUBLE " << x;
	std::cout << std::endl;
}

template <typename T>
void print(T x)
{
	std::cout << "ALL " << x << std::endl;
}

//тип данных
struct Point
{
	double x;
	double y;
};

int main()
{
	Point p = { 4, 7 };

	p.x = 5;
	p.y = 0;

	p = { 7 };

	std::vector<Point> points;

	points.push_back({ 1, 5 });

	std::vector<int> v1 = { 4, 5, 7, 9, -4, 1 };

	print(v1);

	std::vector<double> v2 = { 4.0, 2.5, -3.14, 28.9 };

	print(v2);

	print(4);
	print(3.14);
	print(3.14f);
	print('c');
	print(5u);
	print(3.0l);

	print<int>('c');
	print(static_cast<int>('c'));

	return 0;
}