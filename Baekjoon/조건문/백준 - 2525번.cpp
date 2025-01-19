#include <iostream>
using namespace std;

// 문제
// KOI 전자에서는 건강에 좋고 맛있는 훈제오리구이 요리를 간편하게 만드는 인공지능 오븐을 개발하려고 한다.
// 인공지능 오븐을 사용하는 방법은 적당한 양의 오리 훈제 재료를 인공지능 오븐에 넣으면 된다.
// 그러면 인공지능 오븐은 오븐구이가 끝나는 시간을 분 단위로 자동적으로 계산한다.
// 또한, KOI 전자의 인공지능 오븐 앞면에는 사용자에게 훈제오리구이 요리가 끝나는
// 시각을 알려 주는 디지털 시계가 있다. 훈제오리구이를 시작하는 시각과 오븐구이를 하는 데 필요한 시간이
// 분단위로 주어졌을 때, 오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.

int main()
{
	int A; // 현재 시각 : 시간
	int B; // 현재 시각 : 분
	int C; // 요리하는데 필요한 시간 (단위 : 분)
	int CH = 0; // 필요한 시간(분)을 시간으로 나타냈을 때 시간
	int CM = 0; // 필요한 시간(분)을 시간으로 나타냈을 때 남은 분

	cin >> A >> B;
	cin >> C;

	if (C >= 60) 
	{
		CH = C / 60; //C의 시간
		CM = C % 60; //C의 분
	}
	else
	{
		CM = C;
	}
	
	B += CM;
	if (B >= 60)
	{
		B = B - 60;
		A++;
	}

	A += CH;
	if (A > 23)
	{
		A -= 24;
	}

	cout << A << " " << B;
}