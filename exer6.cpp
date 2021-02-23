#include <iostream>
#include "Sales_item.h"

void PrintTransaction()
{
	Sales_item book;

	for (int i = 0;i <= 2;++i)
	{
		std::cin >> book;
		std::cout << book << std::endl;
	}
}

int main()
{
	PrintTransaction(); //Task 1.20
	system("pause");

	return 0;
}