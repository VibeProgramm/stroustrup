//�����: ������ �������
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
	if (a == b) return "�����";
	return "�� �����";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "�������� 2 ��������" << endl;
	int x, y;
	cin >> x >> y;
	cout << "������������ �������� �� " << x << " � " << y << " = " << max(x, y) << endl;
	cout << "����������� �������� �� " << x << " � " << y << " = " << min(x, y) << endl;
	cout << x << " � " << y << ' ' << pavno(x, y) << endl;
	min()
	system("pause");
	return 0;
}

