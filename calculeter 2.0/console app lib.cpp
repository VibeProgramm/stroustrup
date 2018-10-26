//Автор: Мурзин Алексей
//calculater 2.0

#include <std_lib_facilities.h>

class Token
{
public:
	char kind;        // what kind of token
	double value;     // for numbers: a value 
	Token(char ch)    // make a Token from a char
		:kind(ch), value(0) { }
	Token(char ch, double val)     // make a Token from a char and a double
		:kind(ch), value(val) { }
};

Token get_token(); //считывает символы и состовляет лексемы
				 //используя поток cin 
double expression(); // работает с операциями + и -
				// Вызывает функции tern() и get_token()
double tern();	// Работает с операциями *, /, и %
				// Вызывает функции primary() и get_token()
double primary(); // Работает с числами и скобками
				// Вызывает функции expression() и get_token()



Token get_token() {
	

	char ch;
	cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

	switch (ch) {
		//not yet   case ';':    // for "print"
		//not yet   case 'q':    // for "quit"
	case '(': case ')': case '+': case '-': case '*': case '/':
		return Token(ch);        // let each character represent itself
	case '.':
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
	{
		cin.putback(ch);         // put digit back into the input stream
		double val;
		cin >> val;              // read a floating-point number
		return Token('8', val);   // let '8' represent "a number"
	}
	default:
		error("Bad token");
	}
}

double expression() {
	double left = tern();
	Token t = get_token();
	while (true)
	{
		switch (t.kind)
		{

		case '+':
			left += tern();
			t = get_token();
			break;

		case '-': 
			left -= tern();
			t = get_token();
			break;

		default:
			return left;
		}
	}

}
double tern() {
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
			left /= primary();
			t = get_token();
			break;

		default:
			double d = primary();
			if (d == 0) error("деление на нуль");
			return left;
			break;
		}
	}
}
double primary() {
	Token t = get_token();
	switch (t.kind)
	{

	case '(':
	{
		double d = expression();
		t = get_token();

		if (t.kind != ')') error("требуется ')' ");
		return d;
	}

	case '8':
		return t.value;

	default:
		error("требуется первичное выражение");
	}
}
int main()
{
	SetConsoleRU();
	
	try
	{
		while (cin)
		{
			cout << "= " << expression() << endl;

		}
		system("pause");
	}
	catch (exception& e)
	{
		cerr << e.what() << endl;
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