#include <iostream>
using namespace std;

// ���������� for�� ������ Ǯ�� ���� �����ؾ� �� ���� �ִ�. 
// ����� ����� ������ ���� ���� �Է¹ްų� ����� �� �ð��ʰ��� �� �� �ִٴ� ���̴�.
// C++�� ����ϰ� �ְ� cin/cout�� ����ϰ��� �Ѵٸ�, cin.tie(NULL)�� sync_with_stdio(false)�� �� �� ������ �ְ�,
// endl ��� ���๮��(\n)�� ����. ��, �̷��� �ϸ� �� �̻� scanf/printf/puts/getchar/putchar �� C�� ����� ����� ����ϸ� �� �ȴ�.

int main()
{
	ios::sync_with_stdio(false); // C ǥ�� ����°� C++ ������� ����ȭ ��Ȱ��ȭ
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ���� ���

	long T; //�׽�Ʈ ���̽� ����
	int a, b;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}