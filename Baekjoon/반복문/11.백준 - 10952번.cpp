#include <iostream>
using namespace std;

// �� ���� A�� B�� �Է¹��� ����, A + B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Է��� ���� ���� �׽�Ʈ ���̽��� �̷����
// �� �׽�Ʈ ���̽��� �� �ٷ� �̷�����ְ�, �� �ٿ� A B�� �־�����.
// �Է� ���������� 0 �� ���� ���´�.

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