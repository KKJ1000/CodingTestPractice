#include <iostream>
using namespace std;

// 인하대학교 컴퓨터공학과를 졸업하기 위해서는, 전공 평점이 3.3 이상이거나 졸업고사를 통과해야 한다.
// 그런데 아뿔싸, 치훈이는 깜빡하고 졸업고사를 응시하지 않았다는 사실을 깨달았다!
// 치훈이의 전공평점을 계산해주는 프로그램을 작성해보자.
// 전공 평점은 전공과목별 (학점 x 과목평점)의 합을 학점의 총합으로 나눈 값이다.
// 인하대 컴공과 등급에 따른 과목 평점은 A+: 4.5, A0: 4.0, B+: 3.5, B0: 3.0, C+: 2.5, C0: 2.0, D+: 1.5, D0: 1.0, F: 0.0
// P/F 과목의 경우 등급이 P 또는 F로 표시되는데, 등급이 P인 과목은 계산에서 제외해야 한다.
// 과연 치훈이는 무사히 졸업할 수 있을 까?

int main()
{
	// 과목명, 학점, 등급 20줄 입력
	string subjectName; // 과목
	float unit; // 학점
	string rating; // 등급
	float totalUnit = 0; // 학점 총합
	float gradePoint = 0; // 등급에 따른 과목 평점
	float totalGradePoints = 0; // 학점 * 과목 평점의 총합
	float majorGPA; // 전공 평점

	for (int i = 0; i < 20; i++)
	{
		cin >> subjectName >> unit >> rating;
		if (rating == "P")
			continue;
		if (rating == "A+")
			gradePoint = 4.5f;
		else if (rating == "A0")
			gradePoint = 4.0f;
		else if (rating == "B+")
			gradePoint = 3.5f;
		else if (rating == "B0")
			gradePoint = 3.0f;
		else if (rating == "C+")
			gradePoint = 2.5f;
		else if (rating == "C0")
			gradePoint = 2.0f;
		else if (rating == "D+")
			gradePoint = 1.5f;
		else if (rating == "D0")
			gradePoint = 1.0f;
		else if (rating == "F")
			gradePoint = 0.0f;

		totalUnit += unit;
		totalGradePoints += (unit * gradePoint);
	}

	majorGPA = totalGradePoints / totalUnit;

	cout << majorGPA;
	
	return 0;
}



