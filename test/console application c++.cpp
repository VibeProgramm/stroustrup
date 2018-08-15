//�����: ������ �������
//test

#include <std_lib_facilities.h>

class  Token {
public:
	char kind;
	double value;
};

Token get_token();
double primary()
{
	Token t = get_token();
	switch (t.kind)
	{
	case '(':					//��������� '(' expression ')'
	{
		double d = expression();
		t = get_token();

		if (t.kind != ')') error("��������� ')'");

		return d;
	}

	case '8':				//���������� '8' ��� ������������� �����
		return t.value;		//���������� �������� �����

	default:
		error("��������� ��������� ���������");
	}
}
double term()
{
	double left = primary();
	Token t = get_token();
	while (true)
	{
		switch (t.kind)
		{

		case '*':
			left *= primary();
			t = get_token();
			break;

		case '/':
			double d = primary();
			if (d == 0) error("������� �� ����");

			left /= d;
			t = get_token();
			break;

		/*case '%':
			left %= primary();
			t = get_token();
			break;*/

		default:
			return left;
		}
	}
}
double expression()
{
	double left = term();	//��������� � ��������� ����	
	Token t = get_token();	//�������� ��������� �������

	while (true)
	{
		switch (t.kind)
		{

		case '+': 
			left += term(); //��������� ���� � ���������
			t = get_token();
			break;

		case '-':
			left -= term(); //��������� ���� � ��������
			t = get_token();
			break;

		default:
			return left; // �����: �������� + � - ���;
						// ���������� �����
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{

		while (cin)
		{
			cout << expression() << endl;
		}
		system("pause");
	}
	catch (exception& e)
	{
		cerr << e.what << endl;
		system("pause");
		return 1;
	}

	catch (...)
	{
		cerr << "����������\n";
		system("pause");
		return 2;
	}

}

