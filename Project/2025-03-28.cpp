//#include <iostream>
//
//void swap(int* pa, int* pb)
//{
//	int buffer = *pa;
//	*pa = *pb;
//	*pb = buffer;
//}
//
//void doubleElements(int* arr, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		arr[i] *= 2;
//	}
//}
//
//void print(int arr[], int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		std::cout << arr[i] << " ";
//	}
//	std::cout << std::endl;
//}
//
////инициализация int'а
//void initialize(int* adr_int)
//{
//	*adr_int = 0;
//}
//
////инициализация указателя
//void initialize(int** adr_ptr)
//{
//	*adr_ptr = nullptr;
//}
//
//int main()
//{
//	/*int a, b;
//
//	std::cin >> a >> b;
//
//	swap(&a, &b);
//
//	std::cout << a << " " << b;*/
//
//	int arr[5] = { 1, 7, 7, 9, 2 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, n);
//	doubleElements(arr, n);
//	print(arr, n);
//
//	//int a[10][10][10];
//
//	int k;
//	initialize(&k);
//
//	int* ptr;
//	initialize(&ptr);
//	
//	return 0;
//}