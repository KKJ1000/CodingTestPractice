#include <iostream>
using namespace std;

// 아스키 코드
// 알파벳 소문자, 대문자, 숫자 0-9중 하나가 주어졌을 때, 주어진 글자의 아스키 코드값을 출력하는 프로그램 작성하시오.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char code;
    cin >> code;
    cout << (int)code;

    return 0;
}
