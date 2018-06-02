//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>


int main()
{
	SetConsoleRU();


	int a = 1;
	cout << "a = " << a << endl;
	cout << "b = ++a*a++" << endl << endl;
	int b = ++a*a++;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;




	system("pause");
	return 0;
}