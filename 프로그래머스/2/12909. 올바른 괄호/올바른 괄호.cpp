#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> sc; // 괄호의 짝을 맞추기 위한 스택
    
    // 문자열의 문자들을 하나씩 순회
    for (char c : s)
    {
        if (c == '(')
        {
            sc.push(c); // 여는 괄호면 스택에 저장
        }
        else if (c == ')')
        {
            // 닫는 괄호가 나왔는데 스택이 비어있으면 false
            if (sc.empty())
            {
                return false;
            }
            
            sc.pop(); // 스택에서 여는 괄호 하나 제거
        }
    }
    
    return sc.empty();
}