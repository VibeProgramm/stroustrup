//�����: ������ �������
//

#include <std_lib_facilities.h>



int main()
{
	SetConsoleRU();

	cout << "������� ���������: ";
	double num_1; cin >> num_1; //cin num 1
	char c; cin >> c;
	double num_2; cin >> num_2; //cin num 2

	double sum(0);
	switch (c)
	{
	case '+': sum = num_1 + num_2; break;
	case '-': sum = num_1 - num_2; break;
	case '*': sum = num_1 * num_2; break;
	case '/': sum = num_1 / num_2; break;
		
	}

	cout << "���������: " << sum << endl;
	





	system("pause");
	return 0;
}