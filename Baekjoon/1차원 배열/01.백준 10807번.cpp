#include <iostream>
using namespace std;

// �� N���� ������ �־����� ��, ���� v�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
	int n = 0;
	int v = 0; 
	int input[100]; 
	int count = 0; // �Է� ���� input �迭 ���� ������ v ������ ���� ����

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	cin >> v;

	for (int i = 0; i < n; i++)
	{
		if (input[i] == v)
		{
			count++;
		}
	}
	cout << count << endl;

	return 0;
}