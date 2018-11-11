//Автор: Мурзин Алексей
//
#include <iostream>
#include <Windows.h>

using namespace std;

void SetConsoleRU()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}


int main()
{
	SetConsoleRU();




	system("pause");
	return 0;
}