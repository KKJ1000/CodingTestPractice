#include <iostream>
#include <string>
using namespace std;

// �ܾ� S�� ���� i�� �־����� ��, S�� i��° ���ڸ� ����ϴ� ���α׷� �ۼ�.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int selectIndex = 0;
    cin >> selectIndex;

    selectIndex--; 
    cout << str[selectIndex] << endl; // std::string���� ���� ����

    return 0;
}
