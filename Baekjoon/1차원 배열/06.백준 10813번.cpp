#include <iostream>
#include <vector>
using namespace std;

//도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다.
//바구니에는 공이 1개씩 들어있고, 처음에는 바구니에 적혀있는 번호와 같은 번호가 적힌 공이 들어있다.
//도현이는 앞으로 M번 공을 바꾸려고 한다.도현이는 공을 바꿀 바구니 2개를 선택하고, 두 바구니에 들어있는 공을 서로 교환한다.
//공을 어떻게 바꿀지가 주어졌을 때, M번 공을 바꾼 이후에 각 바구니에 어떤 공이 들어있는지 구하는 프로그램을 작성하시오.

int main()
{
	ios::sync_with_stdio(false); // C++ 입출력 속도 높임
	cin.tie(NULL);            // 입력과 출력 분리하여 속도 높임
	
	int n; // 도현이가 가지고 있는 바구니의 개수
	int m; // 도현이가 공을 바꿀 횟수 M
	int i;
	int j;
	cin >> n >> m;
	vector<int> a(n);

	for (int k = 0; k < n; k++)
	{
		a[k] = k + 1;
	}

	for (int k = 0; k < m; k++)
	{
		cin >> i >> j;

		i -= 1;
		j -= 1;

		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	for (int g = 0; g < n; g++)
	{
		cout << a[g] << " ";
	}

	return 0;
}