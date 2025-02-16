#include <iostream>
using namespace std;

// 크로아티아 알파벳 변경 입력 문제

int main()
{
	string word;
	cin >> word;
	int length = word.length();

	for (int i = 0; i < word.length(); i++)
	{
		if (i < word.length() - 1)
		{
			if (word[i] == 'c' && word[i + 1] == '=')
			{
				length--;
				i++; // 문자를 찾았다면 다음 문자로 건너뛰기
			}
			else if (word[i] == 'c' && word[i + 1] == '-')
			{
				length--;
				i++;
			}
			else if (word[i] == 'd' && word[i + 1] == '-')
			{
				length--;
				i++;
			}
			else if (word[i] == 'l' && word[i + 1] == 'j')
			{
				length--;
				i++;
			}
			else if (word[i] == 'n' && word[i + 1] == 'j')
			{
				length--;
				i++;
			}
			else if (word[i] == 's' && word[i + 1] == '=')
			{
				length--;
				i++;
			}
			else if (word[i] == 'z' && word[i + 1] == '=')
			{
				length--;
				i++;
			}
		}

		if (i < word.length() - 2)
		{
			if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=')
			{
				length -= 2;
				i += 2;
			}
		}
	}

	cout << length;


	return 0;

}

