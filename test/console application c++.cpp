//Автор: Мурзин Алексей
//Тестовый файл

#include <std_lib_facilities.h>

int sum()
{
	return 1 + 1;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	string s1 = "abcd";
	string s2 = "fghk";
	string res = s1 + s2;
	
	cout << res.size() << endl;
	cout << res[res.size()-1] << endl;
	std::auto_ptr<int> ptr_a;
	auto *ptr = new string;


	_getch();
	return 0;
}