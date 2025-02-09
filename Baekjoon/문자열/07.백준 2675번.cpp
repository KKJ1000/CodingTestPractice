#include <iostream>
using namespace std;

// 문자열 s를 입력받은 후 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 자성

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 테스트 케이스 개수 T
    int t;
    cin >> t;
    // 반복 횟수
    int r; 
    // 문자열 S
    string arr;

    for (int i = 0; i < t; i++)
    {
        cin >> r >> arr;
 
        for (int j = 0; j < arr.size(); j++)
        {
            for (int k = 0; k < r; k++)
            {
                cout << arr[j];
            }
        }
        cout << endl;
    }

    return 0;
}
