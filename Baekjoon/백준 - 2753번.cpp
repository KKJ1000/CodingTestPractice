#include <iostream>
using namespace std;
// ���� 2753��
// ����
// ������ �־����� ��, �����̸� 1 �ƴϸ� 0�� ����ϴ� ���α׷� �ۼ�
// ������ ������ 4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ���̴�.

int main()
{
    int year = 0;
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 != 0 || year % 400 == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        cout << 0;
    }
}



