#include <iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;
	
	M -= 45;

	if (M < 0)
	{
		M += 60;
		H--; // H가 1일 때 H--하면 0이 되므로
		if (H < 0) // 여기서 만약 0까지 포함시켰다면
		{
			H += 24; // H는 24시가 되었을 것이다. 0일때는 그대로 0으로 출력해야한다.
		}
	}
	cout << H << " " << M;
}