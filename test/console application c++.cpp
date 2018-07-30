//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>

class  Token {
public:
	char kind;
	double value;
	
	friend Token get_token(Token t);
};

Token get_token(Token t)
{
	char c;
	cin >> c;

	if (c == '+' || c == '-' || c == '/' || c == '*')

		t.kind = c;

	else {
		t.kind = '8';
		t.value = c;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Token t;
	t.kind = '+';
	get_token(t);
	

	_getch();
	return 0;
}

