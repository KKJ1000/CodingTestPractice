#include <iostream>
using namespace std;

// ���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.
// ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.

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

		// word�� ��� �ƴ� ���ڳ� Ư�����ڰ� ���� �� �־� 
		// freq[]�� ������ ��� �� �־� �߸��� �����͸� �д� ���̶� ���.
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

