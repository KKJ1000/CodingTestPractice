#include <iostream>
#include <cstring>
using namespace std;

//��ȭ�� �ɰ� ���� ��ȣ�� �ִٸ�, ���ڸ� �ϳ��� ���� ������ �ݼ� ���� �ִ� �� ���� �ð�������� ������ �Ѵ�.
//���ڸ� �ϳ� ������ ���̾��� ó�� ��ġ�� ���ư���, ���� ���ڸ� �������� ���̾��� ó�� ��ġ���� �ٽ� ������ �Ѵ�.
//���� 1�� �ɷ��� �� 2�ʰ� �ʿ��ϴ�. 1���� ū ���� �Ŵµ� �ɸ��� �ð��� �̺��� �� �ɸ���,
//�� ĭ ���� �ִ� ���ڸ� �ɱ� ���ؼ� 1�ʾ� �� �ɸ���.
//������� �ҸӴϴ� ��ȭ ��ȣ�� �� ���ڿ� �ش��ϴ� ���ڷ� �ܿ��.
//��, � �ܾ �� ��, �� ���ĺ��� �ش��ϴ� ���ڸ� �ɸ� �ȴ�.���� ���, UNUCIC�� 868242�� ����.
//�ҸӴϰ� �ܿ� �ܾ �־����� ��, �� ��ȭ�� �ɱ� ���ؼ� �ʿ��� �ּ� �ð��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
    char word[16];
    cin >> word;
    int time = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'C')
        {
            time += 3;
        }
        else if (word[i] >= 'D' && word[i] <= 'F')
        {
            time += 4;
        }
        else if (word[i] >= 'G' && word[i] <= 'I')
        {
            time += 5;
        }
        else if (word[i] >= 'J' && word[i] <= 'L')
        {
            time += 6;
        }
        else if (word[i] >= 'M' && word[i] <= 'O')
        {
            time += 7;
        }
        else if (word[i] >= 'P' && word[i] <= 'S')
        {
            time += 8;
        }
        else if (word[i] >= 'T' && word[i] <= 'V')
        {
            time += 9;
        }
        else if (word[i] >= 'W' && word[i] <= 'Z')
        {
            time += 10;
        }
    }

    cout << time;
    
    return 0;
}
