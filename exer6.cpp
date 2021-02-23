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

void PrintSameISBNs()
{
	std::cout << "CTRL+Z then Enter to terminate." << std::endl;

	Sales_item currentItem, sum;

	if (std::cin >> currentItem)
	{
		sum = currentItem;
		while (std::cin >> currentItem)
		{
			sum += currentItem;
		}
		std::cout << sum << std::endl;
	}
	

}

int main()
{
	PrintTransaction(); //Task 1.20
	system("pause");

	PrintSummedTransaction(); //Task 1,21
	system("pause");

	PrintSameISBNs(); //Task 1.22

	return 0;
}