//�����: ������ �������
// ����� 9
#include <std_lib_facilities.h>

class Data 
{
public:
	Data(int y, int m, int d);
	int mounth() { return m; }
private:
	int y, m, d; //���, �����, ����
};


Data::Data(int yy, int mm, int dd)

//��������� ������ ������������ ����� ������������� ������ ������ � ���������� ������� �������������.
	: y{yy}, m{mm}, d{dd}
	//������������� ���
	//{ y = yy; m == mm; d == dd; }
{
}
int main()
{
	setlocale(LC_ALL, "Russian");


	
	_getch();
	return 0;
}