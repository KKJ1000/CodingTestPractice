#include <iostream>
#include <vector>
using namespace std;

// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int count;
    cin >> count; 

    string arr;
    cin >> arr; // 공백 없이 주어진 숫자

    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i] - '0'; // 아스키 값 정수로 변환 // '0' = 48 '1' = 49...
    }

    cout << sum;
    
    return 0;
}
