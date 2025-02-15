#include <iostream>
using namespace std;

// 별 찍기
// 첫째 줄에 N이 주어진다.
// 첫째 줄부터 2xN-1 번째 줄까지 차례대로 별을 출력한다.

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
	return 0;
}