#include <iostream>

using namespace std;

// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

int main()
{
	ios::sync_with_stdio(false); // C++ 입출력 속도 높임
	cin.tie(NULL);            // 입력과 출력 분리하여 속도 높임

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