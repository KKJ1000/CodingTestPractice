#include <iostream>
#include <cstring> // strlen 함수
using namespace std;

// 문자열을 입력으로 주면 문자열의 첫 글자와 마지막 글자를 출력하는 프로그램을 작성하시오.
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // 테스트 갯수 입력
    char str[256] = {};

    for (int i = 0; i < t; i++)
    {
        cin >> str;
        int length = strlen(str); // 문자열 길이
        
        if (length > 0)
        {
            cout << str[0] << str[length - 1] << endl;
        }
    }

    return 0;
}
