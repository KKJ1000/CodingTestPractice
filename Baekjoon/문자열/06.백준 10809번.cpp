#include <iostream>
using namespace std;

// ���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��,
// ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ�.

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char word[101] = {};
	int flag[26];
	cin >> word;

	for (int i = 0; i < 26; i++)
	{
		flag[i] = -1;
	}

	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (flag[j] == -1)
			{
				if (word[i] == j + 'a')
				{
					flag[j] = i;
				}
			}
		}

		if (word[i] == '\0')
			break;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << flag[i] << " ";
	}

	return 0;
}
