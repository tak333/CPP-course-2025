///*
//
//#include <iostream>
//
//int main()
//{
//	char symbol = 'A';
//
//	std::cout << symbol << std::endl;
//
//	symbol++;
//
//	std::cout << symbol << std::endl;
//
//	std::cout << symbol + 1 << std::endl;
//
//	symbol = symbol + 1;
//
//	std::cout << symbol << std::endl;
//
//	std::cout << (
//		('A' <= symbol && symbol <= 'Z') 
//		? "UPPER" : "LOWER") << " letter" << std::endl;
//
//	char digitSymbol = '5';
//
//	std::cout << static_cast<int>(digitSymbol) << std::endl;
//	std::cout << digitSymbol << std::endl;
//	std::cout << digitSymbol * 4 << std::endl;
//
//	return 0;
//}
//
//*/
//
//#include <iostream>
//
//int main()
//{
//	const bool isArrayDemo = false;
//	if (isArrayDemo)
//	{
//		std::cout << "Int Array proccessing:" << std::endl;
//
//		int arr[100];
//		size_t n;
//
//		std::cin >> n;
//		for (size_t i = 0; i < n; ++i)
//		{
//			std::cin >> arr[i];
//		}
//
//		for (size_t i = 0; i < n; ++i)
//		{
//			std::cout << arr[i] << " ";
//		}
//		std::cout << std::endl;
//
//		std::cout << "--------------------------" << std::endl;
//
//		std::cout << "Char Array proccessing:" << std::endl;
//
//		char alphabet[100];
//		size_t k;
//
//		std::cin >> k;
//		for (size_t i = 0; i < k; ++i)
//		{
//			std::cin >> alphabet[i];
//		}
//
//		for (size_t i = 0; i < n; ++i)
//		{
//			std::cout << alphabet[i] << ";";
//		}
//		std::cout << std::endl;
//
//	}
//	else
//	{
//		char str[100];
//
//		//char symbol = std::cin.get();
//		//std::cout << "\"" << symbol << "\"" << std::endl;
//
//		//char* (VIP-указатель для библиотечных функций)
//		//считывание одного слова (разделитель остаётся в потоке)
//		std::cin >> str;
//		std::cin.get(); //извлекаю разделитель из потока
//		std::cout << str << std::endl;
//
//		// '\n'
//		//if (std::cin.peek() == '\n')
//		//	std::cin.get();
//
//		std::cin.getline(str, 100);
//		std::cout << str << std::endl;
//
//		for (size_t i = 0; str[i] != '\0'; ++i)
//		{
//			if ('A' <= str[i] && str[i] <= 'Z')
//				str[i] = str[i] - 'A' + 'a';
//		}
//		std::cout << str << std::endl;
//
//		std::cout << "DYNAMIC STRING:" << std::endl;
//
//		char* const str2 = new char[10];
//		std::cin >> str2;
//
//		char* ptr = str2;
//
//		while(*ptr != '\0')
//		{
//			std::cout << *ptr << " ";
//			++ptr;
//		}
//
//		delete[] str2;
//	}
//
//	return 0;
//}