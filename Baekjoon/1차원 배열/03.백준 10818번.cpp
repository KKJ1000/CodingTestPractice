#include <iostream>
#include <vector>
using namespace std;

// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

int main()
{
	ios::sync_with_stdio(false); // C++ 입출력 속도 높임
	cin.tie(NULL);            // 입력과 출력 분리하여 속도 높임
	int n;
	int max;
	int min;

	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	max = a[0];
	min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max <= a[i])
		{
			max = a[i];
		}

		if (min > a[i])
		{
			min = a[i];
		}
	}

	cout << min << " " << max;

	return 0;
}