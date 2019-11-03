#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	std::vector<int> v = { 7,2,3,4,5,46 };

	std::cout << p.has6Elements(v) << std::endl;
	assert(p.has6Elements(v) == 1);
	std::cout << p.hasUniqueNums(v) << std::endl;
	assert(p.hasUniqueNums(v) == 1);
	std::cout << p.isInRange(v) << std::endl;
	assert(p.isInRange(v) == 1);
	cin.get();
}