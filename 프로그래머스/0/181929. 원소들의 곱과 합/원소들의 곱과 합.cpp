#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    long long product = 1;
    int sum = 0;
    
    for (int i = 0; i < num_list.size(); i++)
    {
        product *= num_list[i];
        sum += num_list[i];
    }
    
    int sumSquared = sum * sum;
    
    if (product < sumSquared)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}