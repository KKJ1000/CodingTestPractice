#include <iostream>
#include <string>
using namespace std;

// �Է� ���� ��� ����ϴ� ���α׷� �ۼ�
// �Է��� �־�����. �Է��� �ִ� 100�ٷ� �̷�����ְ�, ���ĺ� �ҹ���, �빮��, ����, ���ڷθ� �̷���� �ִ�.
// �� ���� 100���ڸ� ���� ������, �� ���� �־����� �ʴ´�.
// ��, �� ���� �������� �������� �ʰ�, �������� ������ �ʴ´�.
int main()
{
	string arr;

	while (true)
	{
		if (getline(cin, arr)) // ������� ���ٷ� �Է� ����
		{
			cout << arr << endl;
		}
		else
		{
			break;
		}
	}

	return 0;
}