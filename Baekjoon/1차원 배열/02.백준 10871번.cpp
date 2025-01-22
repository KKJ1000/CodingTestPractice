#include <iostream>
#include <vector>
using namespace std;

// 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
// 수열 : 수 또는 다른 대상의 순서 있는 나열이다.

int main()
{
	ios::sync_with_stdio(false); // C++ 입출력 속도 높임
	cin.tie(nullptr);            // 입력과 출력 분리하여 속도 높임

	int n, x;
	cin >> n >> x;

	vector<int> a(n); // 동적 배열 사용

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