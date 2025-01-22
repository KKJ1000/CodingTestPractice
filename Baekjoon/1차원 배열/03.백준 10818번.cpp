#include <iostream>
#include <vector>
using namespace std;

// N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
	ios::sync_with_stdio(false); // C++ ����� �ӵ� ����
	cin.tie(NULL);            // �Է°� ��� �и��Ͽ� �ӵ� ����
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