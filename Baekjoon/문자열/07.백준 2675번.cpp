#include <iostream>
using namespace std;

// ���ڿ� s�� �Է¹��� �� �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ڼ�

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // �׽�Ʈ ���̽� ���� T
    int t;
    cin >> t;
    // �ݺ� Ƚ��
    int r; 
    // ���ڿ� S
    string arr;

    for (int i = 0; i < t; i++)
    {
        cin >> r >> arr;
 
        for (int j = 0; j < arr.size(); j++)
        {
            for (int k = 0; k < r; k++)
            {
                cout << arr[j];
            }
        }
        cout << endl;
    }

    return 0;
}
