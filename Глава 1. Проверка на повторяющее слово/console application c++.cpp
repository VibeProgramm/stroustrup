//Автор: Мурзин Алексей
//Проверка на повторяющее слово

#include <std_lib_facilities.h>
int main()
{
	SetConsoleRU();
	

	cout << "Программа проверяет на повторяющие слова\n";
	cout << "Введите текст/слова" << endl;

	string repeating_word = "";
	string current;

	//цикл проходит до тех пор пока мы вводим слова. Ввод отделяется пробелом
	while (cin >> current /*водим текущее слово*/) 
	{
		if (current == repeating_word) // Если вводимое слово равно повторяющему
			//выводим повторяющее слово
			cout << "Повторяющее слов " << repeating_word << endl;
		repeating_word = current; //присваем текущее слово повторяющему
	}
	
	return 0;
}