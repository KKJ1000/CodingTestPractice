#include <iostream>

using namespace std;

// 9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
	ios::sync_with_stdio(false); // C++ ����� �ӵ� ����
	cin.tie(NULL);            // �Է°� ��� �и��Ͽ� �ӵ� ����

	int a[9];
	int max = 0;
	int maxCount = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
		if (max < a[i])
		{
			max = a[i];
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (a[i] == max)
		{
			maxCount = i + 1;
		}
	}

	cout << max << endl;
	cout << maxCount << endl;

	return 0;
}