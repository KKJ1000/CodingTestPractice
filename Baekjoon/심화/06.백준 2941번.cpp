#include <iostream>
using namespace std;

// ũ�ξ�Ƽ�� ���ĺ� ���� �Է� ����

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
				i++; // ���ڸ� ã�Ҵٸ� ���� ���ڷ� �ǳʶٱ�
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

