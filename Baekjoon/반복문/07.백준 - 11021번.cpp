#include <iostream>
using namespace std;

// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
	int T = 0;
	int a, b;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a + b << endl;
	}

	return 0;
}