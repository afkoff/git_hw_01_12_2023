#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	int min = INT_MAX;
	cin >> n;
	int *arr = new int[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << min << endl;
	return 0;
}

Описание:
Создаем в C++ динамический массив заданного размера и вводим в него значения, параллельно сравнивая с заданной переменной (максимальное значение изначально), находя таким образом минимальное значение.