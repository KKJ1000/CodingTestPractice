#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; // �ٱ��� ������ �۾� ��
    int i, j; // i ~ j��°
    cin >> n >> m;

    vector<int> a(n);
    for (int k = 0; k < n; k++)
    {
        a[k] = k + 1;
    }

    // M�� �۾�
    for (int k = 0; k < m; k++)
    {
        cin >> i >> j;
        i--; // ex) 3 5�� �Է� ���� �� 3��°���� 5��° ���� �����ϹǷ� [2], [4]�� �Ǿ��Ѵ�.
        j--; // ���� i, j�� ���� --���ش�.

        // i ~ j ��� ������
        while (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }

    return 0;
}
