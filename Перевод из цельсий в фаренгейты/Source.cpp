//Автор: Мурзин Алексей
//Перевод из цельсий в фаренгейты

#include <std_lib_facilities.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите температуру в цельсиях\n";
	double celci; cin >> celci;

	double farenge = (double)9 / 5 * celci + 32; //Ели не указать doule перед 9 то будет выполнятья 
												 //целоцисленое деление, а это здесь нам не нужно

	cout << "Температура в фаренгейтах = " << farenge << endl;


	_getch();
	return 0;
}