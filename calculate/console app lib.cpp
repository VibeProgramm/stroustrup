//�����: ������ �������
//calculater

#include <std_lib_facilities.h>

int main()
{

	SetConsoleRU();

	cout << "������� ��������� (��������� +, -, * � /) \n";
	cout << "�������� x � ����� ��������� (1+2*3x)" << endl;

	int lval = 0;
	int rval;
	cin >> lval; //������ �������� ����� ��������

	if (!cin)
	{
		error("��� �������� ��������");
	}

	for (char op; cin >> op;)
	{
		//�����������...
		if (op != 'x')
		{
			cin >> rval;
		}
		if (!cin)
		{
			error("��� ������� ��������");
		}
		switch (op)
		{

			// ���������� ��������
		case '+': lval += rval; break; // ��������
		case '-': lval -= rval; break; // ���������
		case '*': lval *= rval; break; // ���������
		case '/': lval /= rval; break; // �������
			///////////////////////////////////////

		default: // ���������� ������ ��� ����� ����������
			cout << "���������: " << lval << endl;
			system("pause");
			return 0;
		}
	}

	error("�������� ���������\n");
}