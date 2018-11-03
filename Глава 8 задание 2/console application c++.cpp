//Автор: Мурзин Алексей
//Упражнение 2 из главы 8 без "МЕТКИ" 

#include <std_lib_facilities.h>
void print_vector(const vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << "v[" << i << ']' << " = " << v[i] << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");

	vector<int> v1{ 1,2,3,4,5 };

	print_vector(v1);

	system("pause");
	return 0;
}