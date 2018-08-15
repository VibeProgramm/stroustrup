//Автор: Мурзин Алексей
//calculater

#include <std_lib_facilities.h>

int main()
{

	SetConsoleRU();

	cout << "Введите выражение (разрешены +, -, * и /) \n";
	cout << "Добавтте x к концу выражение (1+2*3x)" << endl;

	int lval = 0;
	int rval;
	cin >> lval; //Чтение крайнего слева операнда

	if (!cin)
	{
		error("Нет перваого операнда");
	}

	for (char op; cin >> op;)
	{
		//Многократно...
		if (op != 'x')
		{
			cin >> rval;
		}
		if (!cin)
		{
			error("Нет второго операнда");
		}
		switch (op)
		{

			// Выполнение операций
		case '+': lval += rval; break; // Сложение
		case '-': lval -= rval; break; // Вычитание
		case '*': lval *= rval; break; // Умножение
		case '/': lval /= rval; break; // Деление
			///////////////////////////////////////

		default: // Операторов больше нет вывод результата
			cout << "Результат: " << lval << endl;
			system("pause");
			return 0;
		}
	}

	error("неверное выражение\n");
}