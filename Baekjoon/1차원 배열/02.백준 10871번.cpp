#include <iostream>
#include <vector>
using namespace std;

// ���� N���� �̷���� ���� A�� ���� X�� �־�����. �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ���� : �� �Ǵ� �ٸ� ����� ���� �ִ� �����̴�.

int main()
{
	ios::sync_with_stdio(false); // C++ ����� �ӵ� ����
	cin.tie(nullptr);            // �Է°� ��� �и��Ͽ� �ӵ� ����

	int n, x;
	cin >> n >> x;

	vector<int> a(n); // ���� �迭 ���

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] < x)
		{
			cout << a[i] << " ";
		}
	}

	return 0;
}