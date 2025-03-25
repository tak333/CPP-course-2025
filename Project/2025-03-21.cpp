///*
//
//#include <iostream>
//
//int main()
//{
//	int arr[10];
//
//	//int n;
//	//std::cin >> n;
//	//int arr2[n];
//
//	//int k = 5;
//	//int arr3[k];
//
//	const int m = 7;
//	int arr4[m];
//
//	//int p = n;
//	//int arr5[p];
//
//	std::cout << typeid(arr).name() << std::endl;
//
//	return 0;
//}
//*/
//
///*
//#include <iostream>
//
//int main()
//{
//	short arr[] = { 7, 8, 9, 14, 3, -4, 7, 78, 7 };
//
//	std::cout << typeid(arr).name() << std::endl;
//	std::cout << sizeof(arr[0]) << std::endl;
//	std::cout << sizeof(arr) << std::endl;
//
//	constexpr int n = sizeof(arr) / sizeof(arr[0]);
//	//short copy[n];
//
//	//print the array:
//	for (int i = 0; i < n; ++i)
//	{
//		std::cout << arr[i] << " ";
//	}
//	std::cout << std::endl;
//
//	//change nearest cells:
//	for (int i = 0; i < n - 1; i += 2)
//	{
//		int buffer = arr[i];
//		arr[i] = arr[i + 1];
//		arr[i + 1] = buffer;
//	}
//
//	//print the array:
//	for (int i = 0; i < n; ++i)
//	{
//		std::cout << arr[i] << " ";
//	}
//	std::cout << std::endl;
//
//
//	return 0;
//}
//*/
//
//#include <iostream>
//#include <iomanip>
//#include <fstream>
//
//int main()
//{
//	std::ifstream input("array.txt");
//
//	if (!input.is_open())
//	{
//		std::cerr << "Error: file was not found!" << std::endl;
//		return -1;
//	}
//
//	int matrix[10][20];
//	int n, m;
//
//	input >> n >> m;
//
//	//reading
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			input >> matrix[i][j];
//		}
//	}
//
//	//printing
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			std::cout << std::setw(5) << matrix[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	std::cout << std::endl;
//
//
//	int sumForColumn[20];
//	//sum for every column
//	for (int j = 0; j < m; ++j)
//	{
//		int sum = 0;
//
//		for (int i = 0; i < n; ++i)
//		{
//			sum += matrix[i][j];
//		}
//
//		sumForColumn[j] = sum;
//	}
//
//	for (int j = 0; j < m; ++j)
//	{
//		std::cout << sumForColumn[j] << " ";
//	}
//	std::cout << std::endl;
//
//
//	return 0;
//}