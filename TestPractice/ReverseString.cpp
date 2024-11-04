#include "ReverseString.h"

#include <iostream>

ReverseString::ReverseString()
{
	// Solution 1
	// string output = solution("nikke");
	// cout<< output;

	// Solution 2
	/*char t[] = "Nikke";
	char* tt = new char[5] {'N', 'i', 'k', 'k', 'e'};
	solution2(t);*/
	char t[] = "Nikke\0";
	solution3(t);
}

string ReverseString::solution(const string& input)
{
	string output;
	output.reserve(input.length());
	for (int index = input.length() - 1; index >= 0; --index)
	{
		output += input[index];
	}

	return output;
}

void ReverseString::solution2(char* input)
{
	int length = strlen(input);
	if (length < 1)
	{
		return;
	}

	cout << "Before : " << input << endl;
	char* startPoint = &input[0];
	char* endPoint = input + length - 1;

	// for (int i = 0; i < length / 2; ++i)
	// {
	// 	char temp = *startPoint;
	// 	*startPoint = *endPoint;
	// 	*endPoint = temp;
	//
	// 	++startPoint;
	// 	--endPoint;
	// }

	while (startPoint < endPoint)
	{
		char temp = *startPoint;
		*startPoint = *endPoint;
		*endPoint = temp;
		++startPoint;
		--endPoint;
	}
	
	cout << "After : " << input << endl;
}

void ReverseString::solution3(char* str)
{
	//char str[] = "abcedf\0";
	cout << "Before : " << str << endl;
	size_t length = strlen(str);

	char* startPoint = str;
	char* endPoint = startPoint + length - 1;

	for (int i = 0; i < length / 2; ++i)
	{
		char temp = *startPoint;

		*(startPoint) = *(endPoint);
		*(endPoint) = temp;

		++startPoint;
		--endPoint;
	}

	cout << "After : " << str << endl;
}
