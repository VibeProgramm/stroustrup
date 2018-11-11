//јвтор: ћурзин јлексей
// √лава 9
#include <std_lib_facilities.h>

class Data 
{
public:
	Data(int y, int m, int d);
	int mounth() { return m; }
private:
	int y, m, d; //год, мес€ц, день
};


Data::Data(int yy, int mm, int dd)

//следующа€ запись представл€ет собой инициализацию членов класса и называетс€ списком инициализации.
	: y{yy}, m{mm}, d{dd}
	//Ёквивалентный код
	//{ y = yy; m == mm; d == dd; }
{
}
int main()
{
	setlocale(LC_ALL, "Russian");


	
	_getch();
	return 0;
}