#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int numbers[10]; //�Է� ���� ���� 10��
    int count = 0; // ���� �ٸ� ������ ����

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
        numbers[i] = numbers[i] % 42; //42�� ���� ������ �� ����
    }

    for (int i = 0; i < 10; i++)
    {
        bool isUnique = true; // �������� �ߺ����� �ƴ��� Ȯ���ϴ� ����
        for (int j = 0; j < i; j++)
        {
            if (numbers[i] == numbers[j])
            {
                isUnique = false; //�ߺ�
                break;
            }
        }

        if (isUnique) // �ߺ��� �ƴҶ�
        {
            count++; 
        }
    }

    cout << count;

    return 0;
}
