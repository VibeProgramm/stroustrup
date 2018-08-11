//Автор: Мурзин Алексей
//test

#include <std_lib_facilities.h>



int main()
{
	setlocale(LC_ALL, "Russian");
	
	vector<int> v;
	for (int i; cin >> i;)
		v.push_back(i);
	for (int i = 0; v.size() > i; i++) 
		cout << "v = " << v[i] << endl;
	

	system("pause");
	return 0;
}

