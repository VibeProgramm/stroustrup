//�����: ������ �������
//���� �� ���� ��������� �������

#include <std_lib_facilities.h>


int main()
{
	SetConsoleRU();

	vector<int> v{ 1,2,3,4,5 };

	for (auto x : v) // ���� �� ���� ��������� �������
	{
		cout << x << endl; // ��� ��� x �� v. ��� ������� ����� ���� x ������������� �� 1
	}



	system("pause");
	return 0;
}