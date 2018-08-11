//Автор: Мурзин Алексей
//test

#include <std_lib_facilities.h>

class  Token {
public:
	char kind;
	double value;
};

Token get_token();
double primary()
{
	Token t = get_token();
	switch (t.kind)
	{
	case '(':					//Обработка '(' expression ')'
	{
		double d = expression();
		t = get_token();

		if (t.kind != ')') error("требуется ')'");

		return d;
	}

	case '8':				//Используем '8' для представления числа
		return t.value;		//Возвращаем значение числа

	default:
		error("требуется первичное выражение");
	}
}
double term()
{
	double left = primary();
	Token t = get_token();
	while (true)
	{
		switch (t.kind)
		{

		case '*':
			left *= primary();
			t = get_token();
			break;

		case '/':
			double d = primary();
			if (d == 0) error("деление на нуль");

			left /= d;
			t = get_token();
			break;

		/*case '%':
			left %= primary();
			t = get_token();
			break;*/

		default:
			return left;
		}
	}
}
double expression()
{
	double left = term();	//Считываем и вычисляем Терм	
	Token t = get_token();	//Получаем следующую лексему

	while (true)
	{
		switch (t.kind)
		{

		case '+': 
			left += term(); //Вычисляем Терм и суммируем
			t = get_token();
			break;

		case '-':
			left -= term(); //Вычисляем Терм и вычитаем
			t = get_token();
			break;

		default:
			return left; // Конец: символов + и - нет;
						// возвращаем ответ
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{

		while (cin)
		{
			cout << expression() << endl;
		}
		system("pause");
	}
	catch (exception& e)
	{
		cerr << e.what << endl;
		system("pause");
		return 1;
	}

	catch (...)
	{
		cerr << "исключение\n";
		system("pause");
		return 2;
	}

}

