#include <iostream>
using namespace std;

// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է� : �׽�Ʈ ���̽� ���� T�� �־�����, �� �ٸ��� A�� B�� �־�����.
// ��� : �� �׽�Ʈ ���̽����� A+B�� ����Ѵ�.

int main()
{
	int T; //�׽�Ʈ ���̽� ���� T
	int A, B;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << A + B << endl;
	}
}