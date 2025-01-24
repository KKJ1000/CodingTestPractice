#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int numbers[10]; //입력 받을 숫자 10개
    int count = 0; // 서로 다른 나머지 개수

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
        numbers[i] = numbers[i] % 42; //42로 나눈 나머지 값 저장
    }

    for (int i = 0; i < 10; i++)
    {
        bool isUnique = true; // 나머지가 중복인지 아닌지 확인하는 변수
        for (int j = 0; j < i; j++)
        {
            if (numbers[i] == numbers[j])
            {
                isUnique = false; //중복
                break;
            }
        }

        if (isUnique) // 중복이 아닐때
        {
            count++; 
        }
    }

    cout << count;

    return 0;
}
