#include <iostream>
#include <string>
using namespace std;

// ���ĺ����θ� �̷���� �ܾ �Է¹޾�, �� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Է� 
// ù° �ٿ� ���� �ҹ��ڿ� �빮�ڷθ� �̷���� �ܾ �־�����. �ܾ��� ���̴� �ִ� 100�̴�.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char word[101] = {};
    cin >> word;
    int len = 0;

    for (int i = 0; i < 101; i++)
    {
        if (word[i] != '\0')
        {
            len++;
        }
    }
    cout << len;

    
    return 0;
}
