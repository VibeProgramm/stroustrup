//Автор: Мурзин Алексей
//Вычисляем среднее и медиану значание температур

#include <std_lib_facilities.h>


int main()
{
	SetConsoleRU();

	vector<double> temps;
	
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	for (auto x : temps)
		sum += x;

	cout << "Средняя температура: " << sum / temps.size() << endl;
	

	// Вычисление медианы темпера туры :
	sort(temps); // Сортировка вектора температур
	cout << "Медианная температура : " << temps[temps.size() / 2] << endl;




	system("pause");
	return 0;
}