#include <iostream>
using namespace std;

// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오.
// 단, 대문자와 소문자를 구분하지 않는다.

int main()
{
	string word;
	cin >> word;

	int freq[26] = { 0 };

	for (int i = 0; i < word.length(); i++)
	{
		char c = word[i];
		
		if (c >= 'a' && c <= 'z')
		{
			c = c - ('a' - 'A');
		}

		// word에 영어가 아닌 숫자나 특수문자가 들어올 수 있어 
		// freq[]의 범위를 벗어날 수 있어 잘못된 데이터를 읽는 중이라 뜬다.
		freq[c - 'A']++; 
	}

	int maxCount = 0;
	char maxChar = '?';
	bool isDuplicate = false;

	for (int i = 0; i < 26; i++)
	{
		if (freq[i] > maxCount)
		{
			maxCount = freq[i];
			maxChar = 'A' + i;
			isDuplicate = false; 
		}
		else if (freq[i] == maxCount)
		{
			isDuplicate = true;
		}
	}

	if (isDuplicate)
	{
		cout << "?" << endl;
	}
	else
	{
		cout << maxChar << endl;
	}

	return 0;

}

