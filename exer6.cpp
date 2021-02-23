#include <iostream>
#include "Sales_item.h"

void PrintTransaction()
{
	Sales_item item;

	for (int i = 0;i <= 2;++i)
	{
		std::cin >> item;
		std::cout << item << std::endl;
	}
}

void PrintSummedTransaction()
{
	Sales_item item1, item2;

	for (int i = 0; i < 2; i++)
	{
		std::cin >> item1 >> item2;
		std::cout << item1 + item2 << std::endl;
	}
}

int main()
{
	PrintTransaction(); //Task 1.20
	system("pause");

	PrintSummedTransaction();
	system("pause");

	return 0;
}