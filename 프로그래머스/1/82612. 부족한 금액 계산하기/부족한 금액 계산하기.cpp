using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    // 1 + 2 + .. + count = count * (count + 1) / 2
    // 총 비용 : price * (1 + 2 + ... + count)
    long long totalCost = (long long)price * count * (count + 1) / 2;
    
    answer = totalCost - money;

    if (answer < 0) {
        return 0;
    }
    
    return answer;
}