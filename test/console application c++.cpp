//Автор: Мурзин Алексей
//test

#include <std_lib_facilities.h>

int max(int min, int max)
{
	if (min > max) max = min;
	return max;
}

int min(int min, int max) {
	if (max < min) min = max;
	return min;
}
string pavno(int a, int b)
{
	if (a == b) return "Равно";
	return "Не равно";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "Введитет 2 значения" << endl;
	int x, y;
	cin >> x >> y;
	cout << "Максимальное значение из " << x << " и " << y << " = " << max(x, y) << endl;
	cout << "Минимальное значение из " << x << " и " << y << " = " << min(x, y) << endl;
	cout << x << " и " << y << ' ' << pavno(x, y) << endl;
	min()
	system("pause");
	return 0;
}

