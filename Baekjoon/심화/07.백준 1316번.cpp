#include <iostream>
using namespace std;

// 그룹 단어 개수 출력하는 프로그램 문제

int main()
{
	int n; 
	cin >> n;
	int count = 0; // 그룹 단어 개수
	string groupWord;
	bool isNaongeo[26];
	for (int i = 0; i < n; i++)
	{
		cin >> groupWord;
		bool isGroupWord = true; // 그룹 단어 체크
		bool visited[26] = { false }; // 이전에 이미 등장한 문자인지 체크

		for (int j = 0; j < groupWord.length(); j++)
		{
			// 이전에 등장했던 문자고 현재 문자와 이전 문자가 다를 경우 ex) ABA 그룹문자가 아님 반복문 종료
			if (visited[groupWord[j] - 'a'] && groupWord[j] != groupWord[j - 1])
			{
				isGroupWord = false;
				break;
			}

			visited[groupWord[j] - 'a'] = true;
		}

		if (isGroupWord)
		{
			count++;
		}
	}

	cout << count << endl;
	return 0;

}

