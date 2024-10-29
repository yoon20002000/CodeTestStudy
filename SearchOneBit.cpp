#include "SearchOneBit.h"
#include<iostream>
SearchOneBit::SearchOneBit(unsigned int number)
{
	std::cout << solution(number);
}

int SearchOneBit::solution(unsigned int number)
{
	int count = 0;

	while (number > 0)
	{
		count += number & 1;
		number = number >> 1;
	}

	return count;
}
