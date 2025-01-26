#include <iostream>
#include <string>
using namespace std;

// 단어 S와 정수 i가 주어졌을 때, S의 i번째 글자를 출력하는 프로그램 작성.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int selectIndex = 0;
    cin >> selectIndex;

    selectIndex--; 
    cout << str[selectIndex] << endl; // std::string에서 직접 접근

    return 0;
}
