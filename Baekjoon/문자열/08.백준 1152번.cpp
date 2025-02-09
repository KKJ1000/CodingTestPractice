#include <iostream>
#include <string>
using namespace std;

// 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까?
// 이를 구하는 프로그램을 작성하시오. // 단 한 단어가 여러번 등장 하면 등장한 횟수만큼 모두 세어야 한다.

int main()
{
    string arr;
    getline(cin, arr);
    int wordCount = 0;
    bool inWord = false; 

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != ' ') // 공백이 아니라면 -> (arr[i]이 단어의 일부)
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
