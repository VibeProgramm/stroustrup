//�����: ������ �������
//�������� ����

#include <std_lib_facilities.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "������� ���-�� �����: ";
	int length;
	cin >> length;
	string *s = new string[length];

	cout << "������� " << length << " �����\n";
	

	for (int i = 0; i < length; i++)
	{
		cout << "������ " << i + 1 << " ";
		//cin >> s[i];
		cin.get();

		getline(cin, s[i]);
		
	}
	srand(time(NULL));

	for (int i = 0; i < length; i++)
	{

		s[i] = s[rand() % length];
	}
	for (int i = 0; i < length; i++)
	{
		cout << "\n������ " << i + 1  << " " << s[i] << endl;
	}

	cout << endl;
	cout << "��������� ������ " << s[rand() % length];

	
	
	
	_getch();
	return 0;
}