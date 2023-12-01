#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	int max = INT_MIN;
	cin >> n;
	int *arr = new int[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;
	return 0;
}

Описание:
Создаем в C++ динамический массив заданного размера и вводим в него значения, параллельно сравнивая с заданной переменной (минимальное значение изначально), находя таким образом максимальное значение.