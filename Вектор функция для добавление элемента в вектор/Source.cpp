//�����: ������ �������
//������: ������� ��� ���������� �������� � ������

#include <std_lib_facilities.h>
void add_el(const int el, vector<int> &v)
{
	v.push_back(el);
	cout << "�������� ���� ������ � ������" << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");


	vector<int> v{ 1,2,3 };
	cout << "������ �������: " << v.size() << endl;
	add_el(4, v);
	cout << "������ �������: " << v.size() << endl;
	for (auto x : v)
		cout << x << endl;


	_getch();
	return 0;
}