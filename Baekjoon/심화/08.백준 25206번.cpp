#include <iostream>
using namespace std;

// ���ϴ��б� ��ǻ�Ͱ��а��� �����ϱ� ���ؼ���, ���� ������ 3.3 �̻��̰ų� ������縦 ����ؾ� �Ѵ�.
// �׷��� �ƻԽ�, ġ���̴� �����ϰ� ������縦 �������� �ʾҴٴ� ����� ���޾Ҵ�!
// ġ������ ���������� ������ִ� ���α׷��� �ۼ��غ���.
// ���� ������ �������� (���� x ��������)�� ���� ������ �������� ���� ���̴�.
// ���ϴ� �İ��� ��޿� ���� ���� ������ A+: 4.5, A0: 4.0, B+: 3.5, B0: 3.0, C+: 2.5, C0: 2.0, D+: 1.5, D0: 1.0, F: 0.0
// P/F ������ ��� ����� P �Ǵ� F�� ǥ�õǴµ�, ����� P�� ������ ��꿡�� �����ؾ� �Ѵ�.
// ���� ġ���̴� ������ ������ �� ���� ��?

int main()
{
	// �����, ����, ��� 20�� �Է�
	string subjectName; // ����
	float unit; // ����
	string rating; // ���
	float totalUnit = 0; // ���� ����
	float gradePoint = 0; // ��޿� ���� ���� ����
	float totalGradePoints = 0; // ���� * ���� ������ ����
	float majorGPA; // ���� ����

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



