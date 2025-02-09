#include <iostream>
using namespace std;

// 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를,
// 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성.

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
