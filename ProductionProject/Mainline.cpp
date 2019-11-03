#include "Production.h"
#include <iostream>
void enterNumbers(std::vector<int>& m_input) 
{
	std::cout << "Enter 6 numbers between 1 and 46" << std::endl;
	int a, b, c, d, e, f;
	m_input.clear();
	std::cin >> a;
	m_input.push_back(a);
	std::cin >> b;
	m_input.push_back(b);
	std::cin >> c;
	m_input.push_back(c);
	std::cin >> d;
	m_input.push_back(d);
	std::cin >> e;
	m_input.push_back(e);
	std::cin >> f;
	m_input.push_back(f);
	std::cout << "\n" << std::endl;

}

int main()
{
	Production p;
	std::vector<int> m_input;
	enterNumbers(m_input);

	while (p.isInRange(m_input) == 0)
	{
		std::cout << "You have entered numbers outside of 1 - 46" << std::endl;
		enterNumbers(m_input);

	}
	while (p.hasUniqueNums(m_input) == 0)
	{
		std::cout << "You have recurring numbers" << std::endl;
		enterNumbers(m_input);
	}
	std::cout << "\n" << std::endl;
	system("pause");
}
