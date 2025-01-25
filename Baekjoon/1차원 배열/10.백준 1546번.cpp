#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<double> a(n);
    double max;
    double sum = 0;


    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = (a[i] / max) * 100;
    }

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    sum = sum / n;
    cout << sum;


    return 0;
}
