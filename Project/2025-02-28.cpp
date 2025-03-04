////Создание функций
//
//#include <iostream>
//#include <iomanip>
//#include <clocale>
//
//
//
//int absolute(int x);
//void print(int x);
//
//
//
//int main()
//{
//	setlocale(LC_CTYPE, "rus");
//
//	int a;
//	std::cin >> a;
//
//	std::cout << "Модуль числа: " << absolute(a) << std::endl;
//
//	return 0;
//}
//
//
//
//void print(int x)
//{
//	if (x % 2 == 0)
//		return;
//
//	std::cout << std::setw(10) << absolute(x) << std::endl;
//}
//
//int absolute(int x)
//{
//	return (x >= 0 ? x : -x);
//}