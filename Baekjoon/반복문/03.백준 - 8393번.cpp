#include <iostream>
using namespace std;

// n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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