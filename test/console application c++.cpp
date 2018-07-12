//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>

class  Token {
public:
	char kind;
	double value;

};

int main()
{
	setlocale(LC_ALL, "Russian");


	Token t1{ '+' };
	cout << "kind: " << t1.kind << endl << "value: " << t1.value << endl;

	_getch();
	return 0;
}