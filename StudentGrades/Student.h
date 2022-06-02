#pragma once
 //определение класса
class Student //в описании класса оставили только поля и прототип метода
{
public:
	// ФИО
	char name[21];
	// оценки
	int marks[3];
	double getAver();
};
