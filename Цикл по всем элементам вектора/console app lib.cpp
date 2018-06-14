//Автор: Мурзин Алексей
//Цикл по всем элементам вектора

#include <std_lib_facilities.h>


int main()
{
	SetConsoleRU();

	vector<int> v{ 1,2,3,4,5 };

	for (auto x : v) // Цикл по всем элементом вектора
	{
		cout << x << endl; // для все x из v. При проходе церез цикл x увеличивается на 1
	}



	system("pause");
	return 0;
}