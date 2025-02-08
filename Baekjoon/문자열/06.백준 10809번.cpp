#include <iostream>
#include <vector>
using namespace std;

// 첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.
// 이것도 아스키 코드 쓸까? 
// 97 ~ 122가 a 부터 z까지이다.
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
