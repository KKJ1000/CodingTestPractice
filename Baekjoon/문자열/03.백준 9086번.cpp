#include <iostream>
#include <cstring> // strlen �Լ�
using namespace std;

// ���ڿ��� �Է����� �ָ� ���ڿ��� ù ���ڿ� ������ ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // �׽�Ʈ ���� �Է�
    char str[256] = {};

    for (int i = 0; i < t; i++)
    {
        cin >> str;
        int length = strlen(str); // ���ڿ� ����
        
        if (length > 0)
        {
            cout << str[0] << str[length - 1] << endl;
        }
    }

    return 0;
}
