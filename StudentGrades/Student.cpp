#include "Student.h"

double Student::getAver() {//реализация функции getAver в пространстве имен Student после кода main
	double sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += marks[i];
	}
	return sum / 3;
}
