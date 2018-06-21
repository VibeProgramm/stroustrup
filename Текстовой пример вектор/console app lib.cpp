//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>


int main()
{
	SetConsoleRU();

	vector<string> words;
	for (string word; cin >> word;)
		words.push_back(word);

	sort(words);
	for (int i = 0; i < words.size(); i++)
	{
		if (i == 0 || words[i - 1] != words[i])
			cout << words[i] << endl;

	}


	system("pause");
	return 0;
}