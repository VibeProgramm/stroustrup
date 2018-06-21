//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>


int main()
{
	SetConsoleRU();

	vector<double> temps;
	
	int i = 0;
	for (double temp; cin >> temp; i++) {
		temps.push_back(temp);
		cout << temps[i] << endl;
	}

	


	system("pause");
	return 0;
}