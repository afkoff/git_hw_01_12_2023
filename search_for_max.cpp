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
	cout << "Максимальное значение" << max << endl;
	return 0;
}
