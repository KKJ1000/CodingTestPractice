#include <iostream>
#include <string>
using namespace std;

// ���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־�����. �� ���ڿ����� �� ���� �ܾ ������?
// �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. // �� �� �ܾ ������ ���� �ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ�.

int main()
{
    string arr;
    getline(cin, arr);
    int wordCount = 0;
    bool inWord = false; 

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != ' ') // ������ �ƴ϶�� -> (arr[i]�� �ܾ��� �Ϻ�)
        {
            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << wordCount;
    

    return 0;
}
