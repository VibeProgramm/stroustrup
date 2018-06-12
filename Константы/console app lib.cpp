//Автор: Мурзин Алексей
//const and constexpr
//Отличие

#include <std_lib_facilities.h>
	//constexpr int max = 100;
constexpr int maxim = 100;
void use()
{
	constexpr int c1 = maxim + 7;
	const int c2 = maxim + 7;
}
void habrprint()
{
	//constexpr auto x = "(4^2-9)/8+2/3"_solve;
	//std::cout << "Answer is " << x;


	auto c = "Privet";
	cout << "c = " <<  c << endl;

	/*char *a;
	*a = "P";*/
	cout << endl;
	const char *c3 = "Hello, Wordl!"; //объевляем константный указатель на тип char
	/*const char *c4 = new char[10];
	c4 = "P";
	(*c3)[2] = 'A';
	c3[1]
	
	
	c4 = "Privet";*/
	c3 = "Здравствуй, мир!";
	cout << "c3 = " << c3 << endl;
	//cout << endl << "c4 = " << c4 << endl;
}
int main()
{
	SetConsoleRU();

	const int x = 19; // Костанта x = 19
	constexpr int y = 20; // Константа y = 20

	
	cout << "const x = " << x << "\tconstexpr y = " << y << endl;
	cout << endl;

	habrprint();



	system("pause");
	return 0;
}
