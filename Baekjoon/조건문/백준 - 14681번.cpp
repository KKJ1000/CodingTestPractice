#include <iostream>
using namespace std;

int main()
{
	// x좌표나 y좌표는 모두 양수나 음수라고 "가정"한다.
	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0)
	{
		cout << 1;
	}
	else if (x < 0 && y > 0)
	{
		cout << 2;
	}
	else if (x < 0 && y < 0)
	{
		cout << 3;
	}
	else
	{
		cout << 4;
	}
}