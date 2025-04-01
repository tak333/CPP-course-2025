/*

#include <iostream>

struct TwoInt
{
	int first;
	int second;
};

////передача по значению
//void swap(int x, int y) {
//	int buffer = x;
//	x = y;
//	y = buffer;
//}

//передача по значению, возврат структуры
//TwoInt swap(int x, int y) {
//	TwoInt result;
//
//	result.first = y;
//	result.second = x;
//
//	return result;
//}

//передача по указателю
void swap(int* px, int* py) {
	int buffer = *px;
	*px = *py;
	*py = buffer;
}

//передача по указателю
void swap(int& x, int& y) {
	int buffer = x;
	x = y;
	y = buffer;
}

void f(int arr[100]) {
	std::cout << typeid(arr).name() << std::endl;
}

int main()
{
	int a, b;

	std::cin >> a >> b;

	//swap(a, b); //doesn't work

	//TwoInt changed = swap(a, b);
	//a = changed.first;
	//b = changed.second;

	swap(&a, &b);
	swap(a, b);

	std::cout << a << " " << b << std::endl;

	int arr[100] = { 1,2,3,4,5,6,70 };

	std::cout << typeid(arr).name() << std::endl;

	f(arr);


	std::cout << arr[5] << std::endl;
	std::cout << *(arr + 5) << std::endl;
	std::cout << *(5 + arr) << std::endl;
	std::cout << 5[arr] << std::endl;

	return 0;
}


*/


#include <iostream>

int main()
{
	int arr[10] = { 1,2,5,7,9,4 };

	//проход с индексацией
	for (int i = 0; i < 10; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	//арифметика указателей на индексах
	for (int i = 0; i < 10; ++i)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;

	//арифметика указателей в "чистом виде"
	int* end = arr + 10;
	for (int* ptr = arr; ptr < end; ++ptr)
	{
		std::cout << *ptr << " ";
	}
	std::cout << std::endl;

	return 0;
}