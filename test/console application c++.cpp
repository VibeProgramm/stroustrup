//Автор: Мурзин Алексей
//Тестовый файл

#include <std_lib_facilities.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "Введите кол-во строк: ";
	int length;
	cin >> length;
	string *s = new string[length];

	cout << "Введите " << length << " строк\n";
	

	for (int i = 0; i < length; i++)
	{
		cout << "Строка " << i + 1 << " ";
		//cin >> s[i];
		cin.get();

		getline(cin, s[i]);
		
	}
	srand(time(NULL));

	for (int i = 0; i < length; i++)
	{

		s[i] = s[rand() % length];
	}
	for (int i = 0; i < length; i++)
	{
		cout << "\nСтрока " << i + 1  << " " << s[i] << endl;
	}

	cout << endl;
	cout << "Рандомная строка " << s[rand() % length];

	
	
	
	_getch();
	return 0;
}