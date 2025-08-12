#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int lastPos[26];
    
    for (int i = 0; i < 26; i++) {
        lastPos[i] = -1;
    }
    
    for (int i = 0; i < s.size(); i++) {
        int index = s[i] - 'a';
        
        if (lastPos[index] == -1) {
            answer.push_back(-1);
        }
        else {
            answer.push_back(i - lastPos[index]);
        }
        lastPos[index] = i;
    }

    return answer;
}