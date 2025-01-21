#include <iostream>
using namespace std;

// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// 입력은 여러 개의 테스트 케이스로 이루어져 있다.
// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다.
// ※ 입력이 끝날 때까지 A+B를 출력하는 문제. EOF에 대해 알아 보세요.

int main()
{
	int a, b;

	while (true)
	{
		cin >> a >> b;
		               // Ctrl + Z 누르고 엔터 치면 cin.eof()가 true가 된다.
		if (cin.eof()) // C++에서는 cin.eof()를 이용하여 파일의 끝에 도달했는지 판단한다. 파일이 끝이 맞으면 true 아니면 false 반환
		{
			break;
		}
		else
		{
			cout << a + b << endl;
		}
	}

	return 0;
}