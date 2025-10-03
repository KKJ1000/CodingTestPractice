#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    unordered_map<string, int> yearning_map;
    for (int i = 0; i < name.size(); i++) {
        yearning_map[name[i]] = yearning[i];
    }

    for (int i = 0; i < photo.size(); i++) {
        int currentScore = 0;
        
        for (int j = 0; j < photo[i].size(); j++) {
            string person = photo[i][j];
            
            if (yearning_map.count(person)) {
                currentScore += yearning_map[person];
            }
        }
        
        answer.push_back(currentScore);
    }
    
    return answer;
}