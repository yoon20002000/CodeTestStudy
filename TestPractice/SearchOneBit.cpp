#include "SearchOneBit.h"
#include<iostream>
SearchOneBit::SearchOneBit(unsigned int number)
{
	std::cout << solution1(number);
}

int SearchOneBit::solution(unsigned int number)
{
	int count = 0;

	while (number > 0)
	{
		count += number & 1U;
		number = number >> 1;
	}

	return count;
}

int SearchOneBit::solution1(unsigned int number)
{
	int count = 0;

	while (number != 0)
	{
		if ((number & 1U)==true)
		{
			++count;
		}
		number = number >> 1;
	}

	return count;
}
