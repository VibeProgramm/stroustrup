//Автор: Мурзин Алексей
//Тестовый файл

#include <std_lib_facilities.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	
	int a = 1;
	cout << "a = " << a << endl;
	cout << "b = ++a*a++" << endl << endl;
	int b = ++a*a++;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	
	
	_getch();
	return 0;
}