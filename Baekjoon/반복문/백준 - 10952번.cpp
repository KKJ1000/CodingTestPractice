#include <iostream>
using namespace std;

// 두 정수 A와 B를 입력받은 다음, A + B를 출력하는 프로그램을 작성하시오.
// 입력은 여러 개의 테스트 케이스로 이루어짐
// 각 테스트 케이스는 한 줄로 이루어져있고, 각 줄에 A B가 주어진다.
// 입력 마지막에는 0 두 개가 들어온다.

int main()
{
	int a = 1;
	int b = 1;

	while (true)
	{
		cin >> a >> b;
		if (a != 0 && b != 0)
		{
			cout << a + b << endl;
			continue;
		}
		break;
	}

	return 0;
}