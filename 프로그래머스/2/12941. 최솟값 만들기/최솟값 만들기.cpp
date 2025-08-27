#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    // ※큰 수는 작은 수와 곱해야 합이 최소가 된다.
    // A 오름차순
    sort(A.begin(), A.end());
    // B 내림차순
    sort(B.begin(), B.end(), greater<int>());
    
    int answer = 0;
    for (int i = 0; i < A.size(); i++) {
        answer += A[i] * B[i];
    }

    return answer;
}