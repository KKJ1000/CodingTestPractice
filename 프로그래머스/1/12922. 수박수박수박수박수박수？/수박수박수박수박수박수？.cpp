#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string pattern[2] = {"수", "박"};
    for (int i = 0; i < n; i++) {
        answer += pattern[i % 2];
    }
    
    return answer;
}