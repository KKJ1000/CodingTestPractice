#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            int sum = numbers[i] + numbers[j];
            answer.push_back(sum);
        }
    }
    
    // 오름차순 정렬 
    sort(answer.begin(), answer.end()); 
    // unique()는 중복 값을 뒤로 모으고 새로운 끝 위치를 반환
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}