#include <iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;
	
	M -= 45;

	if (M < 0)
	{
		M += 60;
		H--; // H�� 1�� �� H--�ϸ� 0�� �ǹǷ�
		if (H < 0) // ���⼭ ���� 0���� ���Խ��״ٸ�
		{
			H += 24; // H�� 24�ð� �Ǿ��� ���̴�. 0�϶��� �״�� 0���� ����ؾ��Ѵ�.
		}
	}
	cout << H << " " << M;
}