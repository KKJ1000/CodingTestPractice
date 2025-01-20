#include <iostream>
using namespace std;

// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

int main()
{
	int n = 0;
	int sum = 0;
	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		sum += i;
	}

	cout << sum;
}