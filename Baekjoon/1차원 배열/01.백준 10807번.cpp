#include <iostream>
using namespace std;

// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

int main()
{
	int n = 0;
	int v = 0; 
	int input[100]; 
	int count = 0; // 입력 받은 input 배열 안의 정수와 v 정수가 같은 갯수

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	cin >> v;

	for (int i = 0; i < n; i++)
	{
		if (input[i] == v)
		{
			count++;
		}
	}
	cout << count << endl;

	return 0;
}