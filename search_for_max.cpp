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
	cout << "Минимальное значение" << min << endl;
	return 0;
}
