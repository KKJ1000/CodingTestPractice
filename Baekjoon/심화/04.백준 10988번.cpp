#include <iostream>
using namespace std;

// ���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����.
// �̶�, �� �ܾ �Ӹ�������� �ƴ��� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Ӹ�����̶� ������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ ���Ѵ�.
// level, noon�� �Ӹ�����̰�, baekjoon, online, judge�� �Ӹ������ �ƴϴ�.

int main()
{
	string arr;
	cin >> arr;
	bool isPalindrome = true;
	for (int i = 0; i < arr.length() / 2; i++)
	{
		if (arr[i + 0] != arr[arr.length() - i - 1])
			isPalindrome = false;
			break;
	}

	if (isPalindrome)
		cout << 1;
	else
		cout << 0;
	return 0;
}