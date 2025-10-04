#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int lux = 51;
    int luy = 51;
    int rdx = -1;
    int rdy = -1;
    
    for (int i = 0; i < wallpaper.size(); i++) {
        for (int j = 0; j < wallpaper[i].size(); j++) {
            if (wallpaper[i][j] == '#') {
                if (j < luy) {
                    luy = j;
                }
                
                if (j > rdy) {
                    rdy = j;
                }
                
                if (i < lux) {
                    lux = i;
                }
                
                if (i > rdx) {
                    rdx = i;
                }
            }
        }
    }

    vector<int> answer = {lux, luy, rdx + 1, rdy + 1};
    return answer;
}