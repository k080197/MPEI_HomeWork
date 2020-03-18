// 521.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 5.2.1.13 Вывести фамилии студентов, пропустивших более двух экзаменов.

#include "pch.h"
#include <string>
#include <iostream>

using namespace std;

class Student
{
public:
	string LastName;
	int PassExam;
};

int main()
{
	cout << "Input number of students:" << endl;

	int number = 0;

	cin >> number;

	Student* student = new Student[number];

	for (int i = 0; i < number; i++)
	{
		cout << "Input student's surname and number of passed exams:" << endl;
		cin >> student[i].LastName >> student[i].PassExam;
	}

	cout << "Students with two and more passed exams:" << endl;

	for (int i = 0; i < number; i++)
	{
		if (student[i].PassExam > 1)
			cout << i + 1 << ". " << student[i].LastName << endl;
	}

	system("pause");
}