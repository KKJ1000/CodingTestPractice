#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; // 바구니 개수와 작업 수
    int i, j; // i ~ j번째
    cin >> n >> m;

    vector<int> a(n);
    for (int k = 0; k < n; k++)
    {
        a[k] = k + 1;
    }

    // M번 작업
    for (int k = 0; k < m; k++)
    {
        cin >> i >> j;
        i--; // ex) 3 5을 입력 했을 때 3번째부터 5번째 값을 스왑하므로 [2], [4]가 되야한다.
        j--; // 따라서 i, j를 각각 --해준다.

        // i ~ j 요소 뒤집기
        while (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }

    return 0;
}
