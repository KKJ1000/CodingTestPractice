#include <iostream>
using namespace std;

// �׷� �ܾ� ���� ����ϴ� ���α׷� ����

int main()
{
	int n; 
	cin >> n;
	int count = 0; // �׷� �ܾ� ����
	string groupWord;
	bool isNaongeo[26];
	for (int i = 0; i < n; i++)
	{
		cin >> groupWord;
		bool isGroupWord = true; // �׷� �ܾ� üũ
		bool visited[26] = { false }; // ������ �̹� ������ �������� üũ

		for (int j = 0; j < groupWord.length(); j++)
		{
			// ������ �����ߴ� ���ڰ� ���� ���ڿ� ���� ���ڰ� �ٸ� ��� ex) ABA �׷칮�ڰ� �ƴ� �ݺ��� ����
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

