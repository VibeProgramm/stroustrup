//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>



int main()
{
	SetConsoleRU();

	cout << "Введите выражение: ";
	
	double num_1;
	double num_2;
	char c;
	cin >> num_1 >> c >> num_2; //cin num 1, c, num 2



	double sum(0);
	switch (c)
	{
	case '+': sum = num_1 + num_2; break;
	case '-': sum = num_1 - num_2; break;
	case '*': sum = num_1 * num_2; break;
	case '/': sum = num_1 / num_2; break;
		
	}

	cout << "Результат: " << sum << endl;
	





	system("pause");
	return 0;
}