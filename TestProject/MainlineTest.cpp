#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production  intP ;
	Production floatP;

	vector<int> v = { 1,2,3,4,5,6};
	vector<int> v1 = { -1,-2,-3,-4,-5,-44};
	vector<float> v2 = { 0.2,0.5,11.5,22.6,-2.6,-45 };

	std::cout << intP.has6Elements(v) << std::endl;
	assert(intP.has6Elements(v) == 1);
	std::cout << intP.hasUniqueNums(v) << std::endl;
	assert(intP.hasUniqueNums(v) == 1);
	//std::cout << intP.isInRange(v) << std::endl;
	//assert(intP.isInRange(v) == 1);

	std::cout << intP.has6Elements(v1) << std::endl;
	assert(intP.has6Elements(v1) == 1);
	std::cout << intP.hasUniqueNums(v1) << std::endl;
	assert(intP.hasUniqueNums(v1) == 1);
	std::cout << intP.isInRange(v1) << std::endl;
	assert(intP.isInRange(v1) == 1);

	//std::cout << floatP.has6Elements(v2) << std::endl;
	//assert(floatP.has6Elements(v2) == 1);
	//std::cout << floatP.hasUniqueNums(v2) << std::endl;
	//assert(floatP.hasUniqueNums(v2) == 1);
	//std::cout << floatP.isInRange(v2) << std::endl;
	//assert(floatP.isInRange(v2) == 1);

	cin.get();
}