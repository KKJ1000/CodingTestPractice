#include <iostream>
using namespace std;

// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력 : 테스트 케이스 개수 T가 주어지고, 각 줄마다 A와 B가 주어진다.
// 출력 : 각 테스트 케이스마다 A+B를 출력한다.

int main()
{
	int T; //테스트 케이스 개수 T
	int A, B;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << A + B << endl;
	}
}