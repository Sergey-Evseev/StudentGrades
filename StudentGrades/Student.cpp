#include "Student.h"

double Student::getAver() {//���������� ������� getAver � ������������ ���� Student ����� ���� main
	double sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += marks[i];
	}
	return sum / 3;
}
