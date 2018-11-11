//Автор: Мурзин Алексей
//Глава 8 Упражнение 3
// n - кольчество элементов подлежащие к записи в vector v
//ищем число фибоначи 
#include <std_lib_facilities.h>

namespace easy {
	vector<int> fibonacci(int x, int y, vector<int> v, int n)
	{
		int max;
		v.size() <= n ? max = v.size() : max = n;


		if (v.size() < 2) error("слишком маленький вектор");

		else
		{

			v[0] = x;
			v[1] = y;


			for (int i = 2; i < max; i++)
			{
				v[i] = v[i - 2] + v[i - 1];
			}
			return v;
		}
	}

	template <typename T>
	void print_vector(const vector<T>& v, int n)
	{
		int max;
		v.size() <= n ? max = v.size() : max = n;

		for (int i = 0; i < max; i++)
		{
			cout << "v[" << i << ']' << " = " << v[i] << endl;
		}
	}


	vector<int> swap_vector_a(vector<int> v)
	{
		for (int i = 0; i < v.size() / 2; i++)
		{
			int end = v.size() - 1; //i - начало вектора end - конец вектора

			swap(v[i], v[end]);
			end--;
		}
		return v;
	}
	void swap_vector_r(vector<int>& v)
	{

		for (int i = 0; i < v.size() / 2; i++)
		{
			int end = v.size() - 1; //i - начало вектора end - конец вектора

			swap(v[i], v[end]);
			end--;
		}
	}

	template <typename T>
	int maxv(vector<T> v1)
	{
		int max = v1[0];
		for (int i = 0; i < v1.size(); i++)
		{
			if (v1[i] > max) max = v1[i];
		}
		return max;
	}

	struct ex10s
	{
		int max;
		int min;
		double mid;
	};
	template <typename T>
	ex10s ex10(vector<T> v1)
	{
		T max = v1[0];
		T min = v1[0];
		T sum = 0;
		double mid = 0;
		for (int i = 0; i < v1.size(); i++)
		{
			if (v1[i] > max) max = v1[i];
			if (v1[i] < min) max = v1[i];
			sum += v1[i];

		}
		mid = sum / v1.size();
		ex10s res;

		res.max = max;
		res.min = min;
		res.mid = mid;

		return res;
	}

	vector<double> priht(vector<double> price, vector<double> weight)
	{
		if (price.size() != weight.size()) error("разные вектора");

		else
		{
			vector<double> res;
			res.resize(price.size());

			for (int i = 0; i < price.size(); i++)
			{
				res[i] = price[i] * weight[i];
			}
			return res;
		}

	}

}

namespace normal
{
	vector<int> work_string(vector<string> s)
	{
		int min = (s[0]).size(), max = (s[0]).size();
		int sum = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (max < (s[i]).size()) max = (s[i]).size();
			if (min > (s[i]).size()) min = (s[i]).size();
			sum += (s[i]).size();
		}
		vector<int> res;
		res.push_back(max);
		res.push_back(min);
		res.push_back(sum);

		return res;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	vector<string> sv {"hello", "wo1rld", "hi"};
	vector<int> iv;
	iv.resize(3);

	iv = normal::work_string(sv);
	cout << "max = " << iv[0] << endl
		<< "min = " << iv[1] << endl
		<< "sum = " << iv[2] << endl;

	system("pause");
	return 0;
}