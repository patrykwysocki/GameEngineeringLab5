#include "Production.h"

int Production::someMethod(int a)
{
	return a - a;
}

bool Production::has6Elements(std::vector<int> numbers)
{
	bool result = true;
	int counter = 0;
	for (auto& number : numbers)
	{
		counter++;
	}
	if (counter != 6)
	{
		result = false;

	}
	return result;
}

bool Production::isInRange(std::vector<int> numbers)
{
	bool result = true;
	if (numbers.size() == 0)
	{
		result = false;
	}
	for (auto& number : numbers)
	{
		if (number < 1 || number > 46)
		{
			result = false;
		}
	}
	return result;
}

bool Production::hasUniqueNums(std::vector<int> numbers)
{
	bool result = true;
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers[i] == numbers[j])
			{
				result = false;
			}
		}
	}
	return result;
}
