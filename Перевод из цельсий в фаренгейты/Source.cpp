//�����: ������ �������
//������� �� ������� � ����������

#include <std_lib_facilities.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ����������� � ��������\n";
	double celci; cin >> celci;

	double farenge = (double)9 / 5 * celci + 32; //��� �� ������� doule ����� 9 �� ����� ���������� 
												 //������������ �������, � ��� ����� ��� �� �����

	cout << "����������� � ����������� = " << farenge << endl;


	_getch();
	return 0;
}