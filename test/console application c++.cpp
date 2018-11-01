//Автор: Мурзин Алексей
//Тест

#include <std_lib_facilities.h>
void print_vector(const vector<int> &);

void print_vector(const vector<int>& v)
{
	cout << "vector { ";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
		if (i != (v.size()) - 1) cout << " , ";
	}
	cout << " } \n";	
}

int main()
{
	setlocale(LC_ALL, "Russian");

	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	print_vector(v);
	 
	system("pause");
}