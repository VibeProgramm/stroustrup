#include <iostream>

struct A
{
	constexpr A(bool b) : n(b ? 5 : 10) {}
	size_t n;
};


int main()
{
	int a[A(true).n];
	int b[A(false).n];

	int i = 0;
	for (int &x : a) x = i++;

	i = 0;
	for (int &x : b) x = i++;

	for (int x : a) std::cout << x << ' ';
	std::cout << std::endl;

	for (int x : b) std::cout << x << ' ';
	std::cout << std::endl;


	system("pause");
	return 0;
}