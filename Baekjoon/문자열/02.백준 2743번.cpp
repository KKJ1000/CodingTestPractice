#include <iostream>
#include <string>
using namespace std;

// 알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.
// 입력 
// 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.

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
