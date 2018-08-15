//Автор: Мурзин Алексей
//Обработка исключений

#include <std_lib_facilities.h>

class Bad_area
{
public:
	void what() {
		cout << "Ошибка! В Функцию не могут передаваться отрицательные аргументы!\n";
	}
};

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
		cout << "area = " << area(-7,10) << endl;

	}
	catch (Bad_area& c)
	{
		c.what();
	}



	system("pause");
	return 0;
}