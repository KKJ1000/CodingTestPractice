#include <iostream>
#include <vector>
using namespace std;

// ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
// �̰͵� �ƽ�Ű �ڵ� ����? 
// 97 ~ 122�� a ���� z�����̴�.
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char word[101] = {};
	int flag[130];
	cin >> word;
	
	for (int i = 97; i <= 122; i++)
	{
		flag[i] = -1;
	}

	for (int i = 0; i < 101; i++)
	{
		for (int j = 97; j <= 122; j++)
		{
			if (flag[j] == -1)
			{
				if (word[i] == j)
				{
					flag[j] = i;
				}
			}
		}

		if (word[i] == '\0')
			break;
	}

	for (int i = 97; i <= 122; i++)
	{
		cout << flag[i] << " ";
	}


    return 0;
}
