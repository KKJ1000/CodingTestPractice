#include <iostream>
#include <vector>
using namespace std;

// N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int count;
    cin >> count; 

    string arr;
    cin >> arr; // ���� ���� �־��� ����

    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i] - '0'; // �ƽ�Ű �� ������ ��ȯ // '0' = 48 '1' = 49...
    }

    cout << sum;
    
    return 0;
}
