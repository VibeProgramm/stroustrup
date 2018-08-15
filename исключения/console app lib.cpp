//Автор: Мурзин Алексей
//Обработка исключений

#include <std_lib_facilities.h>

class Bad_area{};

int area(int len, int wight)
{
	if (len <= 0 || wight <= 0) throw Bad_area{};
	return len * wight;
}


int main()
{
	SetConsoleRU();

	try
	{
		int x = -1;
		int y = 10;
		area(x, y);

	}
	catch (Bad_area)
	{
		cout << "Ошибка" << endl;
	}



	system("pause");
	return 0;
}