//�����: ������ �������
//��������� ������� � ������� �������� ����������

#include <std_lib_facilities.h>


int main()
{
	SetConsoleRU();

	vector<double> temps;
	
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	for (auto x : temps)
		sum += x;

	cout << "������� �����������: " << sum / temps.size() << endl;
	

	// ���������� ������� ������� ���� :
	sort(temps); // ���������� ������� ����������
	cout << "��������� ����������� : " << temps[temps.size() / 2] << endl;




	system("pause");
	return 0;
}